#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: !GlobalTypes
// Class Count: 964
// Enum Count: 0
///////////////////////////////////////////

// Aligment: 4
// Size: 304
class C_INIT_RemapParticleCountToNamedModelElementScalar : public C_INIT_RemapParticleCountToScalar, CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "model"
	// MDefaultString
	// MPropertyAttributeEditor "AssetBrowse( vmdl )"
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x110
	// MPropertyFriendlyName "output min name"
	CUtlString m_outputMinName; // 0x118
	// MPropertyFriendlyName "output max name"
	CUtlString m_outputMaxName; // 0x120
	// MPropertyFriendlyName "model from renderer"
	// MDefaultString
	bool m_bModelFromRenderer; // 0x128
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

// Aligment: 3
// Size: 240
class C_OP_OrientTo2dDirection : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "rotation offset"
	// MDefaultString
	float m_flRotOffset; // 0xe0
	// MPropertyFriendlyName "spin strength"
	// MDefaultString
	float m_flSpinStrength; // 0xe4
	// MPropertyFriendlyName "rotation field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0xe8
};

// Aligment: 0
// Size: 224
class CSpinUpdateBase : public CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
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
// Size: 304
class C_INIT_RemapCPtoVector : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "input control point number"
	// MDefaultString
	int32_t m_nCPInput; // 0xe0
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0xe4
	// MPropertyFriendlyName "input minimum"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_vInputMin; // 0xe8
	// MPropertyFriendlyName "input maximum"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_vInputMax; // 0xf4
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_vOutputMin; // 0x100
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_vOutputMax; // 0x10c
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	// MDefaultString
	float m_flStartTime; // 0x118
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	// MDefaultString
	float m_flEndTime; // 0x11c
	// MPropertyFriendlyName "output is scalar of initial random range"
	// MDefaultString
	bool m_bScaleInitialRange; // 0x120
	// MPropertyFriendlyName "offset position"
	// MDefaultString
	bool m_bOffset; // 0x121
	// MPropertyFriendlyName "accelerate position"
	// MDefaultString
	bool m_bAccelerate; // 0x122
	// MPropertyFriendlyName "local space CP"
	// MDefaultString
	int32_t m_nLocalSpaceCP; // 0x124
	// MPropertyFriendlyName "remap bias"
	// MDefaultString
	float m_flRemapBias; // 0x128
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

// Aligment: 4
// Size: 256
class C_OP_TwistAroundAxis : public CParticleFunctionForce, CParticleFunction
{
public:
	// MPropertyFriendlyName "amount of force"
	// MDefaultString
	float m_fForceAmount; // 0xe0
	// MPropertyFriendlyName "twist axis"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_TwistAxis; // 0xe4
	// MPropertyFriendlyName "object local space axis 0/1"
	// MDefaultString
	bool m_bLocalSpace; // 0xf0
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0xf4
};

// Aligment: 6
// Size: 272
class C_INIT_VelocityRandom : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0xe0
	// MPropertyFriendlyName "random speed min"
	// MDefaultString
	float m_fSpeedMin; // 0xe4
	// MPropertyFriendlyName "random speed max"
	// MDefaultString
	float m_fSpeedMax; // 0xe8
	// MPropertyFriendlyName "speed in local coordinate system min"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_LocalCoordinateSystemSpeedMin; // 0xec
	// MPropertyFriendlyName "speed in local coordinate system max"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_LocalCoordinateSystemSpeedMax; // 0xf8
	// MPropertyFriendlyName "Ignore delta time (RenderTrails)"
	// MDefaultString
	bool m_bIgnoreDT; // 0x104
};

// Aligment: 3
// Size: 256
class C_OP_PlaneCull : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point for point on plane"
	// MDefaultString
	int32_t m_nPlaneControlPoint; // 0xe0
	// MPropertyFriendlyName "plane normal"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecPlaneDirection; // 0xe4
	// MPropertyFriendlyName "cull plane offset"
	// MDefaultString
	float m_flPlaneOffset; // 0xf0
};

// Aligment: 0
// Size: 272
class C_INIT_RandomNamedModelSequence : public C_INIT_RandomNamedModelElement, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 2
// Size: 240
class C_OP_RemapCPtoVelocity : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input control point number"
	// MDefaultString
	int32_t m_nCPInput; // 0xe0
	bool m_bScaleCurrent; // 0xe4
};

// Aligment: 8
// Size: 256
class C_OP_RemapScalarOnceTimed : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "remap time proportional"
	// MDefaultString
	bool m_bProportional; // 0xe0
	// MPropertyFriendlyName "input field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0xe4
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0xe8
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
	// MPropertyFriendlyName "remap time"
	// MDefaultString
	float m_flRemapTime; // 0xfc
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

// Aligment: 11
// Size: 304
class C_INIT_InitialVelocityNoise : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "absolute value"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecAbsVal; // 0xe0
	// MPropertyFriendlyName "invert abs value"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecAbsValInv; // 0xec
	// MPropertyFriendlyName "spatial coordinate offset"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecOffsetLoc; // 0xf8
	// MPropertyFriendlyName "time coordinate offset"
	// MDefaultString
	float m_flOffset; // 0x104
	// MPropertyFriendlyName "output minimum"
	// MDefaultString
	Vector m_vecOutputMin; // 0x108
	// MPropertyFriendlyName "output maximum"
	// MDefaultString
	Vector m_vecOutputMax; // 0x114
	// MPropertyFriendlyName "time noise coordinate scale"
	// MDefaultString
	float m_flNoiseScale; // 0x120
	// MPropertyFriendlyName "spatial noise coordinate scale"
	// MDefaultString
	float m_flNoiseScaleLoc; // 0x124
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0x128
	// MPropertyFriendlyName "apply velocity in local space (0/1)"
	// MDefaultString
	bool m_bLocalSpace; // 0x12c
	// MPropertyFriendlyName "ignore delta time"
	// MDefaultString
	bool m_bIgnoreDt; // 0x12d
};

// Aligment: 0
// Size: 224
class C_OP_CodeDrivenEmitter : public CParticleFunctionEmitter, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 3
// Size: 256
class C_INIT_RandomVector : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "min"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_vecMin; // 0xe0
	// MPropertyFriendlyName "max"
	// MDefaultString
	// MVectorIsSometimesCoordinate
	Vector m_vecMax; // 0xec
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0xf8
};

// Aligment: 6
// Size: 256
class C_OP_ConstrainDistance : public CParticleFunctionConstraint, CParticleFunction
{
public:
	// MPropertyFriendlyName "minimum distance"
	// MDefaultString
	float m_fMinDistance; // 0xe0
	// MPropertyFriendlyName "maximum distance"
	// MDefaultString
	float m_fMaxDistance; // 0xe4
	// MPropertyFriendlyName "control point number"
	// MDefaultString
	int32_t m_nControlPointNumber; // 0xe8
	// MPropertyFriendlyName "distance scale control point (X/Y = Min/Max)"
	// MDefaultString
	int32_t m_nScaleCP; // 0xec
	// MPropertyFriendlyName "offset of center"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_CenterOffset; // 0xf0
	// MPropertyFriendlyName "global center point"
	// MDefaultString
	bool m_bGlobalCenter; // 0xfc
};

// Aligment: 6
// Size: 384
class C_INIT_RtEnvCull : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "test direction"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecTestDir; // 0xe0
	// MPropertyFriendlyName "cull normal"
	// MDefaultString
	// MVectorIsCoordinate
	Vector m_vecTestNormal; // 0xec
	// MPropertyFriendlyName "use velocity for test direction"
	// MDefaultString
	bool m_bUseVelocity; // 0xf8
	// MPropertyFriendlyName "cull on miss"
	// MDefaultString
	bool m_bCullOnMiss; // 0xf9
	// MPropertyFriendlyName "velocity test adjust lifespan"
	// MDefaultString
	bool m_bLifeAdjust; // 0xfa
	// MPropertyFriendlyName "ray trace environment name"
	// MDefaultString
	char[128] m_RtEnvName; // 0xfb
};

// Aligment: 18
// Size: 320
class C_INIT_StatusEffect : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "D_DETAIL_2"
	// MDefaultString
	Detail2Combo_t m_nDetail2Combo; // 0xe0
	// MPropertyFriendlyName "$DETAIL2ROTATION"
	// MDefaultString
	float m_flDetail2Rotation; // 0xe4
	// MPropertyFriendlyName "$DETAIL2SCALE"
	// MDefaultString
	float m_flDetail2Scale; // 0xe8
	// MPropertyFriendlyName "$DETAIL2BLENDFACTOR"
	// MDefaultString
	float m_flDetail2BlendFactor; // 0xec
	// MPropertyFriendlyName "$COLORWARPINTENSITY"
	// MDefaultString
	float m_flColorWarpIntensity; // 0xf0
	// MPropertyFriendlyName "$DIFFUSEWARPBLENDTOFULL"
	// MDefaultString
	float m_flDiffuseWarpBlendToFull; // 0xf4
	// MPropertyFriendlyName "$ENVMAPINTENSITY"
	// MDefaultString
	float m_flEnvMapIntensity; // 0xf8
	// MPropertyFriendlyName "$AMBIENTSCALE"
	// MDefaultString
	float m_flAmbientScale; // 0xfc
	// MPropertyFriendlyName "$SPECULARCOLOR"
	// MDefaultString
	Color m_specularColor; // 0x100
	// MPropertyFriendlyName "$SPECULARSCALE"
	// MDefaultString
	float m_flSpecularScale; // 0x104
	// MPropertyFriendlyName "$SPECULAREXPONENT"
	// MDefaultString
	float m_flSpecularExponent; // 0x108
	// MPropertyFriendlyName "$SPECULAREXPONENTBLENDTOFULL"
	// MDefaultString
	float m_flSpecularExponentBlendToFull; // 0x10c
	// MPropertyFriendlyName "$SPECULARBLENDTOFULL"
	// MDefaultString
	float m_flSpecularBlendToFull; // 0x110
	// MPropertyFriendlyName "$RIMLIGHTCOLOR"
	// MDefaultString
	Color m_rimLightColor; // 0x114
	// MPropertyFriendlyName "$RIMLIGHTSCALE"
	// MDefaultString
	float m_flRimLightScale; // 0x118
	// MPropertyFriendlyName "$REFLECTIONSTINTBYBASEBLENDTONONE"
	// MDefaultString
	float m_flReflectionsTintByBaseBlendToNone; // 0x11c
	// MPropertyFriendlyName "$METALNESSBLENDTOFULL"
	// MDefaultString
	float m_flMetalnessBlendToFull; // 0x120
	// MPropertyFriendlyName "$SELFILLUMBLENDTOFULL"
	// MDefaultString
	float m_flSelfIllumBlendToFull; // 0x124
};

// Aligment: 5
// Size: 288
class C_OP_OscillateScalarSimple : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "oscillation rate"
	// MDefaultString
	float m_Rate; // 0xe0
	// MPropertyFriendlyName "oscillation frequency"
	// MDefaultString
	float m_Frequency; // 0xe4
	// MPropertyFriendlyName "oscillation field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0xe8
	// MPropertyFriendlyName "oscillation multiplier"
	// MDefaultString
	float m_flOscMult; // 0xec
	// MPropertyFriendlyName "oscillation start phase"
	// MDefaultString
	float m_flOscAdd; // 0xf0
};

// Aligment: 2
// Size: 16
struct ParticlePreviewBodyGroup_t
{
public:
	CUtlString m_bodyGroupName; // 0x0
	int32_t m_nValue; // 0x8
};

// Aligment: 4
// Size: 240
class C_OP_RemapCPVelocityToVector : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point"
	// MDefaultString
	int32_t m_nControlPoint; // 0xe0
	// MPropertyFriendlyName "output field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0xe4
	// MPropertyFriendlyName "scale factor"
	// MDefaultString
	float m_flScale; // 0xe8
	// MPropertyFriendlyName "normalize"
	// MDefaultString
	bool m_bNormalize; // 0xec
};

// Aligment: 5
// Size: 256
class C_OP_SetControlPointsToParticle : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "group ID to affect"
	// MDefaultString
	int32_t m_nChildGroupID; // 0xe0
	// MPropertyFriendlyName "first control point to set"
	// MDefaultString
	int32_t m_nFirstControlPoint; // 0xe4
	// MPropertyFriendlyName "# of control points to set"
	// MDefaultString
	int32_t m_nNumControlPoints; // 0xe8
	// MPropertyFriendlyName "first particle to copy"
	// MDefaultString
	int32_t m_nFirstSourcePoint; // 0xec
	// MPropertyFriendlyName "set orientation"
	// MDefaultString
	bool m_bSetOrientation; // 0xf0
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

// Aligment: 2
// Size: 240
class C_OP_FadeOutSimple : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "proportional fade out time"
	// MDefaultString
	float m_flFadeOutTime; // 0xe0
	// MPropertyFriendlyName "alpha field"
	// MDefaultString
	// MPropertyAttributeChoiceName "particlefield_alpha"
	ParticleAttributeIndex_t m_nFieldOutput; // 0xe4
};

// Aligment: 0
// Size: 224
class CParticleFunctionPreEmission : public CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 1
// Size: 4
struct CollisionGroupContext_t
{
public:
	int32_t m_nCollisionGroupNumber; // 0x0
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

// Aligment: 0
// Size: 224
class C_OP_Decay : public CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 5
// Size: 20
struct Relationship_t
{
public:
	CHandle< CBaseEntity > entity; // 0x0
	Class_T classType; // 0x4
	int32_t faction; // 0x8
	Disposition_t disposition; // 0xc
	int32_t priority; // 0x10
};

// Aligment: 2
// Size: 144
class CNavVolumeSphere : public CNavVolume
{
public:
	Vector m_vCenter; // 0x80
	float m_flRadius; // 0x8c
};

// Aligment: 0
// Size: 168
class CNavVolumeAll : public CNavVolumeVector, CNavVolume
{
public:
// <no members described>
};

// Aligment: 3
// Size: 96
class CNetworkVelocityVector
{
public:
	// MNetworkBitCount "18"
	// MNetworkMinValue "-4096"
	// MNetworkMaxValue "4096"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkVelocityVector"
	CNetworkedQuantizedFloat m_vecX; // 0x18
	// MNetworkBitCount "18"
	// MNetworkMinValue "-4096"
	// MNetworkMaxValue "4096"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkVelocityVector"
	CNetworkedQuantizedFloat m_vecY; // 0x30
	// MNetworkBitCount "18"
	// MNetworkMinValue "-4096"
	// MNetworkMaxValue "4096"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkVelocityVector"
	CNetworkedQuantizedFloat m_vecZ; // 0x48
};

// Aligment: 10
// Size: 36
struct hudtextparms_t
{
public:
	Color color1; // 0x0
	Color color2; // 0x4
	uint8_t effect; // 0x8
	uint8_t channel; // 0x9
	float x; // 0xc
	float y; // 0x10
	float fadeinTime; // 0x14
	float fadeoutTime; // 0x18
	float holdTime; // 0x1c
	float fxTime; // 0x20
};

// Aligment: 0
// Size: 8
class IRagdoll
{
public:
// <no members described>
};

// Aligment: 14
// Size: 64
struct fogplayerparams_t
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "PlayerFogController"
	CHandle< CFogController > m_hCtrl; // 0x8
	float m_flTransitionTime; // 0xc
	Color m_OldColor; // 0x10
	float m_flOldStart; // 0x14
	float m_flOldEnd; // 0x18
	float m_flOldMaxDensity; // 0x1c
	float m_flOldHDRColorScale; // 0x20
	float m_flOldFarZ; // 0x24
	Color m_NewColor; // 0x28
	float m_flNewStart; // 0x2c
	float m_flNewEnd; // 0x30
	float m_flNewMaxDensity; // 0x34
	float m_flNewHDRColorScale; // 0x38
	float m_flNewFarZ; // 0x3c
};

// Aligment: 6
// Size: 136
struct sky3dparams_t
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "12"
	int16_t scale; // 0x8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder
	Vector origin; // 0xc
	// MNetworkEnable
	// MNetworkEnable
	bool bClip3DSkyBoxNearToWorldFar; // 0x18
	// MNetworkEnable
	// MNetworkEnable
	float flClip3DSkyBoxNearToWorldFarOffset; // 0x1c
	// MNetworkEnable
	// MNetworkEnable
	fogparams_t fog; // 0x20
	// MNetworkEnable
	// MNetworkEnable
	CUtlStringToken m_nWorldGroupID; // 0x80
};

// Aligment: 5
// Size: 472
class CSequenceTransitioner2
{
public:
	CNetworkedSequenceOperation m_currentOp; // 0x8
	float m_flCurrentPlaybackRate; // 0x48
	float m_flCurrentAnimTime; // 0x4c
	TransitioningLayer_t[4] m_transitioningLayers; // 0x50
	CBaseAnimatingController* m_pOwner; // 0x1d0
};

// Aligment: 0
// Size: 100
struct dynpitchvol_t : public dynpitchvol_base_t
{
public:
// <no members described>
};

// Aligment: 2
// Size: 200
class CNavVolumeBreadthFirstSearch : public CNavVolumeCalculatedVector, CNavVolume
{
public:
	Vector m_vStartPos; // 0xb0
	float m_flSearchDist; // 0xbc
};

// Aligment: 0
// Size: 8
class IDamageHandler
{
public:
// <no members described>
};

// Aligment: 3
// Size: 88
class CResponseQueue::CDeferredResponse
{
public:
	CResponseCriteriaSet m_contexts; // 0x10
	float m_fDispatchTime; // 0x48
	CHandle< CBaseEntity > m_hIssuer; // 0x4c
};

// Aligment: 1
// Size: 80
class CNetworkedIKContext
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CUtlVector< CNetworkedIKProceduralTargetContext > m_ProceduralTargetContexts; // 0x8
};

// Aligment: 0
// Size: 168
class CNavVolumeCalculatedVector : public CNavVolume
{
public:
// <no members described>
};

// Aligment: 5
// Size: 24
struct constraint_breakableparams_t
{
public:
	float strength; // 0x0
	float forceLimit; // 0x4
	float torqueLimit; // 0x8
	float32[2] bodyMassScale; // 0xc
	bool isActive; // 0x14
};

// Aligment: 0
// Size: 144
class CSingleplayRules : public CGameRules
{
public:
// <no members described>
};

// Aligment: 27
// Size: 528
class CPlayerLocalData
{
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	ChangeAccessorFieldPathIndex_t m_NetworkVar_PathIndex; // 0x8
	// MNetworkEnable
	// MNetworkEnable
	uint8[32] m_chAreaBits; // 0x18
	// MNetworkEnable
	// MNetworkEnable
	uint8[24] m_chAreaPortalBits; // 0x38
	int32_t m_nStepside; // 0x50
	int32_t m_nOldButtons; // 0x54
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "12"
	uint32_t m_iHideHUD; // 0x58
	// MNetworkEnable
	// MNetworkEnable
	float m_flFOVRate; // 0x5c
	Vector m_vecOverViewpoint; // 0x60
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDucked; // 0x6c
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDucking; // 0x6d
	// MNetworkEnable
	// MNetworkEnable
	bool m_bInDuckJump; // 0x6e
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkPriority "64"
	uint32_t m_nDuckTimeMsecs; // 0x70
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint32_t m_nDuckJumpTimeMsecs; // 0x74
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint32_t m_nJumpTimeMsecs; // 0x78
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "17"
	// MNetworkMinValue "-4096"
	// MNetworkMaxValue "4096"
	float m_flFallVelocity; // 0x7c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	// MNetworkBitCount "32"
	QAngle m_vecPunchAngle; // 0x88
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "32"
	QAngle m_vecPunchAngleVel; // 0x94
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDrawViewmodel; // 0xa0
	// MNetworkEnable
	// MNetworkEnable
	bool m_bWearingSuit; // 0xa1
	// MNetworkEnable
	// MNetworkEnable
	bool m_bPoisoned; // 0xa2
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "16"
	// MNetworkEncodeFlags
	// MNetworkMinValue "0"
	// MNetworkMaxValue "128"
	float m_flStepSize; // 0xa4
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAllowAutoMovement; // 0xa8
	// MNetworkEnable
	// MNetworkEnable
	bool m_bSlowMovement; // 0xa9
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAutoAimTarget; // 0xaa
	// MNetworkEnable
	// MNetworkEnable
	sky3dparams_t m_skybox3d; // 0xb0
	// MNetworkEnable
	// MNetworkEnable
	audioparams_t m_audio; // 0x138
	fogparams_t m_fog; // 0x1b0
};

// Aligment: 12
// Size: 216
class CInteractionManager
{
public:
	interactions_t m_nActiveInteraction; // 0x8
	matrix3x4_t m_matHoldTransform; // 0xc
	CHandle< CBaseAnimating > m_hSelf; // 0x3c
	CHandle< CBasePlayer > m_hPlayer; // 0x40
	CHandle< CBaseAnimating > m_hInteractionTarget; // 0x44
	matrix3x4_t m_mInteractionTransformInit; // 0x48
	matrix3x4_t m_mInteractionTransformTarget; // 0x78
	float m_flInteractionLerp; // 0xa8
	bool[8] m_bSelfInteractionRequirementMet; // 0xac
	bool[8] m_bInteractionsDisabled; // 0xb4
	bool m_bAllInteractionsDisabled; // 0xbc
	CUtlVector< prevent_interaction_t > m_vecPreventionEntities; // 0xc0
};

// Aligment: 7
// Size: 104
class CAttributeManager
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_Providers; // 0x8
	CUtlVector< CHandle< CBaseEntity > > m_Receivers; // 0x20
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_iReapplyProvisionParity; // 0x38
	// MNetworkEnable
	// MNetworkEnable
	CHandle< CBaseEntity > m_hOuter; // 0x3c
	bool m_bPreventLoopback; // 0x40
	// MNetworkEnable
	// MNetworkEnable
	attributeprovidertypes_t m_ProviderType; // 0x44
	CUtlVector< CAttributeManager::cached_attribute_float_t > m_CachedResults; // 0x48
};

// Aligment: 0
// Size: 272
struct GameFileWeaponInfo_t : public FileWeaponInfo_t
{
public:
// <no members described>
};

// Aligment: 1
// Size: 112
class CAI_ExpresserWithFollowup : public CAI_Expresser
{
public:
	ResponseFollowup* m_pPostponedFollowup; // 0x60
};

// Aligment: 18
// Size: 928
class CBaseAnimatingController : public CSkeletonAnimationController
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "baseAnimBaseLayerChanged"
	CNetworkedSequenceOperation m_baseLayer; // 0x18
	// MNetworkEnable
	CAnimGraphNetworkedVariables m_animGraphNetworkedVars; // 0x58
	// MNetworkDisable
	bool m_bSequenceFinished; // 0xe0
	// MNetworkDisable
	float m_flGroundSpeed; // 0xe4
	// MNetworkDisable
	float m_flLastEventCycle; // 0xe8
	// MNetworkDisable
	float m_flLastEventAnimTime; // 0xec
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "-4"
	// MNetworkMaxValue "12"
	// MNetworkEncodeFlags
	// MNetworkPriority "64"
	// MNetworkChangeCallback "playbackRateChanged"
	CNetworkedQuantizedFloat m_flPlaybackRate; // 0xf0
	// MNetworkDisable
	float m_flPrevAnimTime; // 0x108
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1"
	// MNetworkUserGroup "m_flPoseParameter"
	// MNetworkChangeCallback "poseParametersChanged"
	float32[24] m_flPoseParameter; // 0x10c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "clientSideAnimationChanged"
	bool m_bClientSideAnimation; // 0x16c
	// MNetworkDisable
	bool m_bNetworkedAnimationInputsChanged; // 0x16d
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	// MNetworkPriority "64"
	// MNetworkChangeCallback "clientSideAnimCycleReset"
	int32_t m_nNewSequenceParity; // 0x170
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	// MNetworkPriority "64"
	int32_t m_nResetEventsParity; // 0x174
	// MNetworkDisable
	float m_flIKGroundContactTime; // 0x178
	// MNetworkDisable
	float m_flIKGroundMinHeight; // 0x17c
	// MNetworkDisable
	float m_flIKGroundMaxHeight; // 0x180
	// MNetworkDisable
	float m_flIkZAdjustAmount; // 0x184
	// MNetworkDisable
	CSequenceTransitioner2 m_SequenceTransitioner; // 0x198
};

// Aligment: 0
// Size: 128
class CNavVolume
{
public:
// <no members described>
};

// Aligment: 1
// Size: 120
class CMultiplayer_Expresser : public CAI_ExpresserWithFollowup, CAI_Expresser
{
public:
	bool m_bAllowMultipleScenes; // 0x70
};

// Aligment: 0
// Size: 8
class IEconItemInterface
{
public:
// <no members described>
};

// Aligment: 15
// Size: 176
class CAnimationLayer
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "animationLayerOpChanged"
	CNetworkedSequenceOperation m_op; // 0x18
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "animationLayerOrderChanged"
	int32_t m_nOrder; // 0x58
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "-4"
	// MNetworkMaxValue "12"
	// MNetworkEncodeFlags
	// MNetworkSendProxyRecipientsFilter
	CNetworkedQuantizedFloat m_flPlaybackRate; // 0x60
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkSendProxyRecipientsFilter
	bool m_bLooping; // 0x78
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	// MNetworkPriority "64"
	// MNetworkChangeCallback "animationLayerCycleReset"
	// MNetworkSendProxyRecipientsFilter
	int32_t m_nNewSequenceParity; // 0x7c
	// MNetworkDisable
	int32_t m_nFlags; // 0x80
	// MNetworkDisable
	bool m_bSequenceFinished; // 0x84
	// MNetworkDisable
	float m_flKillRate; // 0x88
	// MNetworkDisable
	float m_flKillDelay; // 0x8c
	// MNetworkDisable
	float m_flLayerAnimtime; // 0x90
	// MNetworkDisable
	float m_flLayerFadeOuttime; // 0x94
	// MNetworkDisable
	int32_t m_nActivity; // 0x98
	// MNetworkDisable
	int32_t m_nPriority; // 0x9c
	// MNetworkDisable
	float m_flLastEventCycle; // 0xa0
	// MNetworkDisable
	float m_flLastAccess; // 0xa4
};

// Aligment: 5
// Size: 52
struct HandHistoryInfo_t
{
public:
	Vector m_vVelocity; // 0x0
	Vector m_vFilteredVelocity; // 0xc
	Vector m_vFilteredThrowVel; // 0x18
	Vector m_vPosition; // 0x24
	float m_flSampleTime; // 0x30
};

// Aligment: 2
// Size: 24
class Extent
{
public:
	Vector lo; // 0x0
	Vector hi; // 0xc
};

// Aligment: 2
// Size: 4
struct cache_ragdoll_t
{
public:
	int16_t solidCount; // 0x0
	int16_t constraintCount; // 0x2
};

// Aligment: 2
// Size: 12
class CRandSimTimer : public CSimpleSimTimer
{
public:
	float m_minInterval; // 0x4
	float m_maxInterval; // 0x8
};

// Aligment: 22
// Size: 136
class CTakeDamageInfo
{
public:
	Vector m_vecDamageForce; // 0x8
	Vector m_vecDamagePosition; // 0x14
	Vector m_vecReportedPosition; // 0x20
	Vector m_vecDamageDirection; // 0x2c
	CHandle< CBaseEntity > m_hInflictor; // 0x38
	CHandle< CBaseEntity > m_hAttacker; // 0x3c
	CHandle< CBaseEntity > m_hWeapon; // 0x40
	float m_flDamage; // 0x44
	float m_flMaxDamage; // 0x48
	float m_flBaseDamage; // 0x4c
	int32_t m_bitsDamageType; // 0x50
	int32_t m_iDamageCustom; // 0x54
	int32_t m_iAmmoType; // 0x58
	float m_flRadius; // 0x5c
	bool m_bCanHeadshot; // 0x68
	float m_flOriginalDamage; // 0x6c
	int32_t m_nDamageTaken; // 0x70
	int16_t m_iRecord; // 0x74
	float m_flStabilityDamage; // 0x78
	bool m_bAllowFriendlyFire; // 0x7c
	bool m_bCanBeBlocked; // 0x7d
	HSCRIPT m_hScriptInstance; // 0x80
};

// Aligment: 4
// Size: 64
class CConstantForceController
{
public:
	Vector m_linear; // 0xc
	Vector m_angular; // 0x18
	Vector m_linearSave; // 0x24
	Vector m_angularSave; // 0x30
};

// Aligment: 10
// Size: 496
class CRR_Response
{
public:
	uint8_t m_Type; // 0x0
	char[192] m_szResponseName; // 0x1
	char[128] m_szMatchingRule; // 0xc1
	ResponseParams m_Params; // 0x150
	float m_fMatchScore; // 0x170
	char* m_szSpeakerContext; // 0x178
	char* m_szWorldContext; // 0x180
	ResponseFollowup m_Followup; // 0x188
	CUtlVector< CUtlSymbol > m_pchCriteriaNames; // 0x1c0
	CUtlVector< char* > m_pchCriteriaValues; // 0x1d8
};

// Aligment: 22
// Size: 96
struct fogparams_t
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder
	Vector dirPrimary; // 0x8
	// MNetworkEnable
	// MNetworkEnable
	Color colorPrimary; // 0x14
	// MNetworkEnable
	// MNetworkEnable
	Color colorSecondary; // 0x18
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	Color colorPrimaryLerpTo; // 0x1c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	Color colorSecondaryLerpTo; // 0x20
	// MNetworkEnable
	// MNetworkEnable
	float start; // 0x24
	// MNetworkEnable
	// MNetworkEnable
	float end; // 0x28
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float farz; // 0x2c
	// MNetworkEnable
	// MNetworkEnable
	float maxdensity; // 0x30
	// MNetworkEnable
	// MNetworkEnable
	float exponent; // 0x34
	// MNetworkEnable
	// MNetworkEnable
	float HDRColorScale; // 0x38
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float skyboxFogFactor; // 0x3c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float skyboxFogFactorLerpTo; // 0x40
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float startLerpTo; // 0x44
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float endLerpTo; // 0x48
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float maxdensityLerpTo; // 0x4c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float lerptime; // 0x50
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float duration; // 0x54
	// MNetworkEnable
	// MNetworkEnable
	bool enable; // 0x58
	// MNetworkEnable
	// MNetworkEnable
	bool blend; // 0x59
	// MNetworkEnable
	// MNetworkEnable
	bool m_bNoReflectionFog; // 0x5a
	bool m_bPadding; // 0x5b
};

// Aligment: 5
// Size: 184
class CRecipientFilter : public IRecipientFilter
{
public:
	NetChannelBufType_t m_nBufType; // 0x8
	bool m_bInitMessage; // 0xc
	CUtlVector< CEntityIndex > m_Recipients; // 0x10
	bool m_bUsingPredictionRules; // 0xb0
	bool m_bIgnorePredictionCull; // 0xb1
};

// Aligment: 7
// Size: 512
class CModelState
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonModelChanged"
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0xa0
	// MNetworkDisable
	CUtlSymbolLarge m_ModelName; // 0xa8
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonMeshGroupMaskChanged"
	uint64_t m_MeshGroupMask; // 0x178
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonMotionTypeChanged"
	int8_t m_nIdealMotionType; // 0x1ec
	// MNetworkDisable
	int8_t m_nForceLOD; // 0x1ed
	// MNetworkDisable
	bool m_bIsJiggleBonesEnabled; // 0x1ee
	// MNetworkDisable
	int8_t m_nClothUpdateFlags; // 0x1ef
};

// Aligment: 2
// Size: 24
class CEconItemAttribute
{
public:
	// MNetworkEnable
	// MNetworkEnable
	uint16_t m_iAttributeDefinitionIndex; // 0x12
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkAlias "m_iRawValue32"
	float m_flValue; // 0x14
};

// Aligment: 1
// Size: 8
class CSimTimer : public CSimpleSimTimer
{
public:
	float m_interval; // 0x4
};

// Aligment: 4
// Size: 32
class CMotorController
{
public:
	float m_speed; // 0x8
	float m_maxTorque; // 0xc
	Vector m_axis; // 0x10
	float m_inertiaFactor; // 0x1c
};

// Aligment: 8
// Size: 48
struct WeaponTextureData_t
{
public:
	CUtlString m_Name; // 0x0
	CUtlString m_Sprite; // 0x8
	CUtlString m_Font; // 0x10
	int32_t m_x; // 0x18
	int32_t m_y; // 0x1c
	int32_t m_width; // 0x20
	int32_t m_height; // 0x24
	int32_t m_FontCharacter; // 0x28
};

// Aligment: 4
// Size: 56
struct ragdoll_t
{
public:
	CUtlVector< ragdollelement_t > list; // 0x0
	CUtlVector< int32 > boneIndex; // 0x18
	bool allowStretch; // 0x30
	bool unused; // 0x31
};

// Aligment: 0
// Size: 8
class IHasAttributes
{
public:
// <no members described>
};

// Aligment: 2
// Size: 40
class CCopyRecipientFilter : public IRecipientFilter
{
public:
	int32_t m_Flags; // 0x8
	CUtlVector< CEntityIndex > m_Recipients; // 0x10
};

// Aligment: 14
// Size: 72
class CSoundParameters
{
public:
	int32_t channel; // 0x0
	float volume; // 0x4
	int32_t pitch; // 0x8
	int32_t pitchlow; // 0xc
	int32_t pitchhigh; // 0x10
	soundlevel_t soundlevel; // 0x14
	bool play_to_owner_only; // 0x18
	uint8_t m_nSpecialWaveFlags; // 0x19
	int32_t count; // 0x1c
	CUtlString soundname; // 0x20
	int32_t delay_msec; // 0x28
	KeyValues* m_pOperatorsKV; // 0x30
	int32_t m_nRandomSeed; // 0x38
	KeyValues* gameData; // 0x40
};

// Aligment: 0
// Size: 8
class IPhysicsPlayerController
{
public:
// <no members described>
};

// Aligment: 10
// Size: 64
struct locksound_t
{
public:
	CUtlSymbolLarge sLockedSound; // 0x8
	CUtlSymbolLarge sLockedSentence; // 0x10
	CUtlSymbolLarge sUnlockedSound; // 0x18
	CUtlSymbolLarge sUnlockedSentence; // 0x20
	int32_t iLockedSentence; // 0x28
	int32_t iUnlockedSentence; // 0x2c
	float flwaitSound; // 0x30
	float flwaitSentence; // 0x34
	uint8_t bEOFLocked; // 0x38
	uint8_t bEOFUnlocked; // 0x39
};

// Aligment: 10
// Size: 48
struct TonemapParameters_t
{
public:
	// MNetworkEnable
	float m_flAutoExposureMin; // 0x8
	// MNetworkEnable
	float m_flAutoExposureMax; // 0xc
	// MNetworkEnable
	float m_flExposureCompensationScalar; // 0x10
	// MNetworkEnable
	float m_flTonemapPercentTarget; // 0x14
	// MNetworkEnable
	float m_flTonemapPercentBrightPixels; // 0x18
	// MNetworkEnable
	float m_flTonemapMinAvgLum; // 0x1c
	// MNetworkEnable
	float m_flBloomScale; // 0x20
	// MNetworkEnable
	float m_flBloomStartValue; // 0x24
	// MNetworkEnable
	float m_flRate; // 0x28
	// MNetworkEnable
	float m_flAccelerateExposureDown; // 0x2c
};

// Aligment: 30
// Size: 272
struct FileWeaponInfo_t
{
public:
	bool m_bParsedScript; // 0x8
	bool m_bLoadedHudElements; // 0x9
	CUtlString m_szClassName; // 0x10
	CUtlString m_szPrintName; // 0x18
	CUtlString m_szViewModel; // 0x20
	CUtlString m_szWorldModel; // 0x28
	CUtlString m_szAnimationPrefix; // 0x30
	CUtlString m_szMuzzleFlashParticle; // 0x38
	CUtlString m_szTracerParticle; // 0x40
	int32_t m_iSlot; // 0x48
	int32_t m_iPosition; // 0x4c
	int32_t m_iMaxClip1; // 0x50
	int32_t m_iMaxClip2; // 0x54
	int32_t m_iDefaultClip1; // 0x58
	int32_t m_iDefaultClip2; // 0x5c
	int32_t m_iWeight; // 0x60
	int32_t m_iRumbleEffect; // 0x64
	bool m_bAutoSwitchTo; // 0x68
	bool m_bAutoSwitchFrom; // 0x69
	int32_t m_iFlags; // 0x6c
	CUtlString m_szAmmo1; // 0x70
	CUtlString m_szAmmo2; // 0x78
	CUtlString m_szAIAddOn; // 0x80
	bool m_bMeleeWeapon; // 0x88
	bool m_bBuiltRightHanded; // 0x89
	bool m_bAllowFlipping; // 0x8a
	int32_t m_iAmmoType; // 0x8c
	int32_t m_iAmmo2Type; // 0x90
	CUtlVector< WeaponTextureData_t > m_aTextureData; // 0x98
	CUtlVector< WeaponSoundData_t > m_aShootSounds; // 0xf8
};

// Aligment: 8
// Size: 72
class CGlowProperty
{
public:
	Vector m_fGlowColor; // 0x8
	int32_t m_iGlowTeam; // 0x14
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnGlowTypeChanged"
	int32_t m_iGlowType; // 0x30
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nGlowRange; // 0x34
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nGlowRangeMin; // 0x38
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnGlowColorChanged"
	Color m_glowColorOverride; // 0x3c
	// MNetworkEnable
	// MNetworkEnable
	bool m_bFlashing; // 0x40
	bool m_bGlowing; // 0x41
};

// Aligment: 15
// Size: 160
class CSoundPatch
{
public:
	CSoundEnvelope m_pitch; // 0x8
	CSoundEnvelope m_volume; // 0x18
	float m_shutdownTime; // 0x30
	float m_flLastTime; // 0x34
	CUtlSymbolLarge m_iszSoundScriptName; // 0x38
	CHandle< CBaseEntity > m_hEnt; // 0x40
	int32_t m_entityChannel; // 0x44
	CEntityIndex m_soundEntityIndex; // 0x48
	Vector m_soundOrigin; // 0x4c
	int32_t m_flags; // 0x58
	int32_t m_baseFlags; // 0x5c
	int32_t m_isPlaying; // 0x60
	CCopyRecipientFilter m_Filter; // 0x68
	float m_flCloseCaptionDuration; // 0x90
	CUtlSymbolLarge m_iszClassName; // 0x98
public:
	static int32_t &Get_g_SoundPatchCount() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CSoundPatch")->m_static_fiels[0]->m_instance); }
};

// Aligment: 8
// Size: 64
class CNetworkedSequenceOperation
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "13"
	// MNetworkSerializer "minusone"
	// MNetworkChangeCallback "sequenceOpSequenceChanged"
	// MNetworkPriority "64"
	HSequence m_hSequence; // 0x8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "15"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1"
	// MNetworkEncodeFlags
	// MNetworkPriority "64"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkUserGroup "m_flCycle"
	float m_flPrevCycle; // 0xc
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "15"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1"
	// MNetworkEncodeFlags
	// MNetworkPriority "64"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkUserGroup "m_flCycle"
	// MNetworkChangeCallback "sequenceOpCycleChanged"
	float m_flCycle; // 0x10
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1"
	// MNetworkEncodeFlags
	CNetworkedQuantizedFloat m_flWeight; // 0x18
	// MNetworkDisable
	bool m_bSequenceChangeNetworked; // 0x30
	// MNetworkDisable
	bool m_bDiscontinuity; // 0x31
	// MNetworkDisable
	float m_flPrevCycleFromDiscontinuity; // 0x34
	// MNetworkDisable
	float m_flPrevCycleForAnimEventDetection; // 0x38
};

// Aligment: 16
// Size: 96
class CSceneEventInfo
{
public:
	bool m_bStarted; // 0x1c
	int32_t m_iLayer; // 0x20
	int32_t m_iPriority; // 0x24
	HSequence m_hSequence; // 0x28
	bool m_bIsGesture; // 0x2c
	float m_flWeight; // 0x30
	CHandle< CBaseEntity > m_hTarget; // 0x34
	bool m_bIsMoving; // 0x38
	bool m_bHasArrived; // 0x39
	float m_flInitialYaw; // 0x3c
	float m_flTargetYaw; // 0x40
	float m_flFacingYaw; // 0x44
	int32_t m_nType; // 0x48
	float m_flNext; // 0x4c
	bool m_bClientSide; // 0x50
	bool m_bShouldRemove; // 0x51
};

// Aligment: 1
// Size: 24
class CPlayerInfo : public IBotController
{
public:
	CBasePlayer* m_pParent; // 0x10
};

// Aligment: 1
// Size: 1008
class CBaseAnimatingOverlayController : public CBaseAnimatingController, CSkeletonAnimationController
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "overlay_vars"
	// MNetworkChangeCallback "OnOverlaysChanged2"
	CUtlVector< CAnimationLayer > m_AnimOverlay; // 0x3a0
};

// Aligment: 4
// Size: 32
struct thinkfunc_t
{
public:
	HSCRIPT m_hFn; // 0x8
	CUtlStringToken m_nContext; // 0x10
	int32_t m_nNextThinkTick; // 0x14
	int32_t m_nLastThinkTick; // 0x18
};

// Aligment: 11
// Size: 1136
class CSkeletonInstance : public CGameSceneNode
{
public:
	// MNetworkEnable
	CModelState m_modelState; // 0x170
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonRenderingEnableChanged"
	bool m_bIsRenderingEnabled; // 0x370
	// MNetworkEnable
	bool m_bIsAnimationEnabled; // 0x371
	// MNetworkDisable
	bitfield:1 m_bDisableSolidCollisionsForHierarchy; // 0x0
	// MNetworkDisable
	bitfield:1 m_bDirtyMotionType; // 0x0
	// MNetworkDisable
	bitfield:1 m_bIsGeneratingLatchedParentSpaceState; // 0x0
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonMaterialGroupChanged"
	CUtlStringToken m_materialGroup; // 0x374
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "2"
	uint8_t m_nHitboxSet; // 0x378
	// MNetworkDisable
	bool m_bEnableIK; // 0x3b8
	// MNetworkEnable
	// MNetworkEnable
	float m_flIkMasterBlendValueCache; // 0x3bc
	// MNetworkEnable
	// MNetworkEnable
	CNetworkedIKContext m_NetworkedIKContext; // 0x3c0
};

// Aligment: 3
// Size: 48
class CHintMessageQueue
{
public:
	float m_tmMessageEnd; // 0x8
	CUtlVector< CHintMessage* > m_messages; // 0x10
	CBasePlayer* m_pPlayer; // 0x28
};

// Aligment: 2
// Size: 144
class CGameRules
{
public:
	char[128] m_szQuestName; // 0x8
	int32_t m_nQuestPhase; // 0x88
};

// Aligment: 1
// Size: 16
struct magnetted_objects_t
{
public:
	CHandle< CBaseEntity > hEntity; // 0x8
};

// Aligment: 3
// Size: 96
class CNetworkOriginQuantizedVector
{
public:
	// MNetworkBitCount "19"
	// MNetworkMinValue "-16384"
	// MNetworkMaxValue "16384"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkOriginQuantizedVector"
	CNetworkedQuantizedFloat m_vecX; // 0x18
	// MNetworkBitCount "19"
	// MNetworkMinValue "-16384"
	// MNetworkMaxValue "16384"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkOriginQuantizedVector"
	CNetworkedQuantizedFloat m_vecY; // 0x30
	// MNetworkBitCount "19"
	// MNetworkMinValue "-16384"
	// MNetworkMaxValue "16384"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkOriginQuantizedVector"
	CNetworkedQuantizedFloat m_vecZ; // 0x48
};

// Aligment: 2
// Size: 16
class CountdownTimer
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_duration; // 0x8
	// MNetworkEnable
	// MNetworkEnable
	float m_timestamp; // 0xc
};

// Aligment: 7
// Size: 104
class CNetworkOriginCellCoordQuantizedVector
{
public:
	// MNetworkBitCount "10"
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "32"
	// MNetworkSerializer "cellx"
	uint16_t m_cellX; // 0x18
	// MNetworkBitCount "10"
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "32"
	// MNetworkSerializer "celly"
	uint16_t m_cellY; // 0x1a
	// MNetworkBitCount "10"
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "32"
	// MNetworkSerializer "cellz"
	uint16_t m_cellZ; // 0x1c
	// MNetworkBitCount "3"
	uint16_t m_nOutsideWorld; // 0x1e
	// MNetworkBitCount "15"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1024"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "32"
	// MNetworkSerializer "posx"
	CNetworkedQuantizedFloat m_vecX; // 0x20
	// MNetworkBitCount "15"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1024"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "32"
	// MNetworkSerializer "posy"
	CNetworkedQuantizedFloat m_vecY; // 0x38
	// MNetworkBitCount "15"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1024"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "32"
	// MNetworkSerializer "posz"
	CNetworkedQuantizedFloat m_vecZ; // 0x50
};

// Aligment: 3
// Size: 280
class CTimeOfDayDynamicValues
{
public:
	// MNetworkEnable
	// MNetworkEnable
	bool m_bUsed; // 0x12
	// MNetworkEnable
	// MNetworkEnable
	float32[16] m_Floats; // 0x14
	// MNetworkEnable
	// MNetworkEnable
	Vector[16] m_Vectors; // 0x54
};

// Aligment: 4
// Size: 40
class CSequenceTransitioner
{
public:
	CUtlVector< CAnimationLayer > m_animationQueue; // 0x0
	bool m_bIsInSimulation; // 0x18
	float m_flSimOrRenderTime; // 0x1c
	float m_flInterpolatedTime; // 0x20
};

// Aligment: 3
// Size: 40
struct ragdollelement_t
{
public:
	Vector originParentSpace; // 0x0
	int32_t parentIndex; // 0x20
	float m_flRadius; // 0x24
};

// Aligment: 0
// Size: 8
class IPlayerInfo
{
public:
// <no members described>
};

// Aligment: 1
// Size: 16
class IntervalTimer
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_timestamp; // 0x8
};

// Aligment: 2
// Size: 504
struct ConceptHistory_t
{
public:
	float timeSpoken; // 0x0
	CRR_Response m_response; // 0x8
};

// Aligment: 2
// Size: 8
struct CEnvWindShared::WindAveEvent_t
{
public:
	float m_flStartWindSpeed; // 0x0
	float m_flAveWindSpeed; // 0x4
};

// Aligment: 8
// Size: 56
class CPlayerState
{
public:
	bool deadflag; // 0x8
	bool hltv; // 0x9
	QAngle v_angle; // 0xc
	CUtlSymbolLarge netname; // 0x18
	int32_t fixangle; // 0x20
	QAngle anglechange; // 0x24
	int32_t frags; // 0x30
	int32_t deaths; // 0x34
};

// Aligment: 2
// Size: 24
class CRandStopwatch : public CStopwatchBase, CSimpleSimTimer
{
public:
	float m_minInterval; // 0x10
	float m_maxInterval; // 0x14
};

// Aligment: 31
// Size: 352
class CGameSceneNode
{
public:
	// MNetworkDisable
	matrix3x4a_t m_mNodeToWorld; // 0x10
	// MNetworkDisable
	CEntityInstance* m_pOwner; // 0x40
	// MNetworkDisable
	CGameSceneNode* m_pParent; // 0x48
	// MNetworkDisable
	CGameSceneNode* m_pChild; // 0x50
	// MNetworkDisable
	CGameSceneNode* m_pNextSibling; // 0x58
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkSerializer "gameSceneNode"
	// MNetworkChangeCallback "gameSceneNodeHierarchyParentChanged"
	// MNetworkPriority "64"
	// MNetworkVarEmbeddedFieldOffsetDelta "8"
	CGameSceneNodeHandle m_hParent; // 0x78
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	// MNetworkUserGroup "Origin"
	// MNetworkChangeCallback "gameSceneNodeLocalOriginChanged"
	CNetworkOriginCellCoordQuantizedVector m_vecOrigin; // 0x88
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkPriority "64"
	// MNetworkSerializer "gameSceneNodeStepSimulationAnglesSerializer"
	// MNetworkChangeCallback "gameSceneNodeLocalAnglesChanged"
	QAngle m_angRotation; // 0xf8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "gameSceneNodeLocalScaleChanged"
	// MNetworkPriority "64"
	float m_flScale; // 0x104
	// MNetworkDisable
	Vector m_vecAbsOrigin; // 0x108
	// MNetworkDisable
	QAngle m_angAbsRotation; // 0x114
	// MNetworkDisable
	float m_flAbsScale; // 0x120
	// MNetworkDisable
	int16_t m_nParentAttachmentOrBone; // 0x124
	// MNetworkDisable
	bool m_bDormant; // 0x126
	// MNetworkDisable
	bool m_bForceParentToBeNetworked; // 0x127
	// MNetworkDisable
	bitfield:1 m_bDirtyHierarchy; // 0x0
	// MNetworkDisable
	bitfield:1 m_bDirtyBoneMergeInfo; // 0x0
	// MNetworkDisable
	bitfield:1 m_bNetworkedPositionChanged; // 0x0
	// MNetworkDisable
	bitfield:1 m_bNetworkedAnglesChanged; // 0x0
	// MNetworkDisable
	bitfield:1 m_bNetworkedScaleChanged; // 0x0
	// MNetworkDisable
	bitfield:1 m_bWillBeCallingPostDataUpdate; // 0x0
	// MNetworkDisable
	bitfield:1 m_bNotifyBoneTransformsChanged; // 0x0
	// MNetworkDisable
	bitfield:2 m_nLatchAbsOrigin; // 0x0
	// MNetworkDisable
	bitfield:1 m_bDirtyBoneMergeBoneToRoot; // 0x0
	// MNetworkDisable
	uint8_t m_nHierarchicalDepth; // 0x12a
	// MNetworkDisable
	uint8_t m_nHierarchyType; // 0x12b
	// MNetworkDisable
	uint8_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount; // 0x12c
	// MNetworkEnable
	// MNetworkEnable
	CUtlStringToken m_name; // 0x130
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "gameSceneNodeHierarchyAttachmentChanged"
	CUtlStringToken m_hierarchyAttachName; // 0x140
	// MNetworkDisable
	float m_flZOffset; // 0x144
	// MNetworkDisable
	Vector m_vRenderOrigin; // 0x148
};

// Aligment: 2
// Size: 16
struct prevent_interaction_t
{
public:
	CHandle< CBaseEntity > m_hEntity; // 0x8
	float m_flUntilTime; // 0xc
};

// Aligment: 28
// Size: 192
class CBaseAchievement
{
public:
	char* m_pszName; // 0x18
	int32_t m_iAchievementID; // 0x20
	int32_t m_iFlags; // 0x24
	int32_t m_iGoal; // 0x28
	int32_t m_iProgressMsgIncrement; // 0x2c
	int32_t m_iProgressMsgMinimum; // 0x30
	int32_t m_iPointValue; // 0x34
	bool m_bHideUntilAchieved; // 0x38
	bool m_bStoreProgressInSteam; // 0x39
	char* m_pInflictorClassNameFilter; // 0x40
	char* m_pInflictorEntityNameFilter; // 0x48
	char* m_pVictimClassNameFilter; // 0x50
	char* m_pAttackerClassNameFilter; // 0x58
	char* m_pMapNameFilter; // 0x60
	char* m_pGameDirFilter; // 0x68
	char** m_pszComponentNames; // 0x70
	char** m_pszComponentDisplayNames; // 0x78
	int32_t m_iNumComponents; // 0x80
	char* m_pszComponentPrefix; // 0x88
	int32_t m_iComponentPrefixLen; // 0x90
	bool m_bAchieved; // 0x94
	int32_t m_iCount; // 0x98
	int32_t m_iProgressShown; // 0x9c
	uint64_t m_iComponentBits; // 0xa0
	int32_t m_nUserSlot; // 0xb0
	int32_t m_iDisplayOrder; // 0xb4
	bool m_bShowOnHUD; // 0xb8
	int32_t m_iAssetAwardID; // 0xbc
};

// Aligment: 31
// Size: 640
class CEnvWindShared
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartTime; // 0x8
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_iWindSeed; // 0xc
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint16_t m_iMinWind; // 0x10
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint16_t m_iMaxWind; // 0x12
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "14"
	int32_t m_windRadius; // 0x14
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint16_t m_iMinGust; // 0x18
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint16_t m_iMaxGust; // 0x1a
	// MNetworkEnable
	// MNetworkEnable
	float m_flMinGustDelay; // 0x1c
	// MNetworkEnable
	// MNetworkEnable
	float m_flMaxGustDelay; // 0x20
	// MNetworkEnable
	// MNetworkEnable
	float m_flGustDuration; // 0x24
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "9"
	uint16_t m_iGustDirChange; // 0x28
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_location; // 0x2c
	int32_t m_iszGustSound; // 0x38
	int32_t m_iWindDir; // 0x3c
	float m_flWindSpeed; // 0x40
	Vector m_currentWindVector; // 0x44
	Vector m_CurrentSwayVector; // 0x50
	Vector m_PrevSwayVector; // 0x5c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "9"
	uint16_t m_iInitialWindDir; // 0x68
	// MNetworkEnable
	// MNetworkEnable
	float m_flInitialWindSpeed; // 0x6c
	CEntityIOOutput m_OnGustStart; // 0x70
	CEntityIOOutput m_OnGustEnd; // 0x98
	float m_flVariationTime; // 0xc0
	float m_flSwayTime; // 0xc4
	float m_flSimTime; // 0xc8
	float m_flSwitchTime; // 0xcc
	float m_flAveWindSpeed; // 0xd0
	bool m_bGusting; // 0xd4
	float m_flWindAngleVariation; // 0xd8
	float m_flWindSpeedVariation; // 0xdc
	CEntityIndex m_iEntIndex; // 0xe0
};

// Aligment: 0
// Size: 1
class CPhysicsComponent
{
public:
// <no members described>
};

// Aligment: 1
// Size: 80
class CNetworkTransmitComponent
{
public:
	uint8_t m_nTransmitStateOwnedCounter; // 0x3c
public:
	static int32_t &Get_s_nWatchTransmitEntity() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fiels[0]->m_instance); }
	static bool &Get_s_bUseNetworkVars() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fiels[1]->m_instance); }
	static bool &Get_s_bNetworkVarPerFieldTracking() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fiels[2]->m_instance); }
	static bool &Get_s_bNetworkVarValidate() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fiels[3]->m_instance); }
};

// Aligment: 2
// Size: 16
class CGameSceneNodeHandle
{
public:
	// MNetworkEnable
	CEntityHandle m_hOwner; // 0x8
	// MNetworkEnable
	CUtlStringToken m_name; // 0xc
};

// Aligment: 8
// Size: 49
class ResponseFollowup
{
public:
	char* followup_concept; // 0x0
	char* followup_contexts; // 0x8
	float followup_delay; // 0x10
	char* followup_target; // 0x14
	char* followup_entityiotarget; // 0x1c
	char* followup_entityioinput; // 0x24
	float followup_entityiodelay; // 0x2c
	bool bFired; // 0x30
};

// Aligment: 14
// Size: 128
class CCommentarySystem
{
public:
	int32_t m_afPlayersLastButtons; // 0x14
	int32_t m_iCommentaryNodeCount; // 0x18
	bool m_bCommentaryConvarsChanging; // 0x1c
	int32_t m_iClearPressedButtons; // 0x20
	bool m_bCommentaryEnabledMidGame; // 0x24
	float m_flNextTeleportTime; // 0x28
	int32_t m_iTeleportStage; // 0x2c
	bool m_bCheatState; // 0x30
	bool m_bIsFirstSpawnGroupToLoad; // 0x31
	KeyValues* m_pkvSavedModifications; // 0x38
	CUtlVector< CHandle< CBaseEntity > > m_hSpawnedEntities; // 0x58
	CHandle< CPointCommentaryNode > m_hCurrentNode; // 0x70
	CHandle< CPointCommentaryNode > m_hActiveCommentaryNode; // 0x74
	CHandle< CPointCommentaryNode > m_hLastCommentaryNode; // 0x78
};

// Aligment: 2
// Size: 16
class CAI_MoveMonitor
{
public:
	Vector m_vMark; // 0x0
	float m_flMarkTolerance; // 0xc
};

// Aligment: 2
// Size: 16
struct WeaponSoundData_t
{
public:
	WeaponSound_t m_Type; // 0x0
	CUtlString m_Sound; // 0x8
};

// Aligment: 3
// Size: 20
class VelocitySampler
{
public:
	Vector m_prevSample; // 0x0
	float m_fPrevSampleTime; // 0xc
	float m_fIdealSampleRate; // 0x10
};

// Aligment: 1
// Size: 24
class CPhysicsShake
{
public:
	Vector m_force; // 0x8
};

// Aligment: 1
// Size: 200
class CMultiplayRules : public CGameRules
{
public:
	float m_flIntermissionEndTime; // 0xa8
public:
	static int32_t &Get_m_nMapCycleTimeStamp() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CMultiplayRules")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_m_nMapCycleindex() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CMultiplayRules")->m_static_fiels[1]->m_instance); }
};

// Aligment: 1
// Size: 168
class CNavVolumeVector : public CNavVolume
{
public:
	bool m_bHasBeenPreFiltered; // 0x88
};

// Aligment: 4
// Size: 120
struct audioparams_t
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder
	Vector[8] localSound; // 0x8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "17"
	int32_t soundscapeIndex; // 0x68
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "8"
	uint8_t localBits; // 0x6c
	// MNetworkEnable
	// MNetworkEnable
	int32_t soundscapeEntityListIndex; // 0x70
};

// Aligment: 1
// Size: 16
class CStopwatchBase : public CSimpleSimTimer
{
public:
	bool m_fIsRunning; // 0xc
};

// Aligment: 25
// Size: 100
struct dynpitchvol_base_t
{
public:
	int32_t preset; // 0x0
	int32_t pitchrun; // 0x4
	int32_t pitchstart; // 0x8
	int32_t spinup; // 0xc
	int32_t spindown; // 0x10
	int32_t volrun; // 0x14
	int32_t volstart; // 0x18
	int32_t fadein; // 0x1c
	int32_t fadeout; // 0x20
	int32_t lfotype; // 0x24
	int32_t lforate; // 0x28
	int32_t lfomodpitch; // 0x2c
	int32_t lfomodvol; // 0x30
	int32_t cspinup; // 0x34
	int32_t cspincount; // 0x38
	int32_t pitch; // 0x3c
	int32_t spinupsav; // 0x40
	int32_t spindownsav; // 0x44
	int32_t pitchfrac; // 0x48
	int32_t vol; // 0x4c
	int32_t fadeinsav; // 0x50
	int32_t fadeoutsav; // 0x54
	int32_t volfrac; // 0x58
	int32_t lfofrac; // 0x5c
	int32_t lfomult; // 0x60
};

// Aligment: 4
// Size: 16
class CSoundEnvelope
{
public:
	float m_current; // 0x0
	float m_target; // 0x4
	float m_rate; // 0x8
	bool m_forceupdate; // 0xc
};

// Aligment: 1
// Size: 320
class CAttributeContainer : public CAttributeManager
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CEconItemView m_Item; // 0x68
};

// Aligment: 8
// Size: 136
class ConstraintSoundInfo
{
public:
	VelocitySampler m_vSampler; // 0x8
	SimpleConstraintSoundProfile m_soundProfile; // 0x20
	Vector m_forwardAxis; // 0x40
	CUtlSymbolLarge m_iszTravelSoundFwd; // 0x50
	CUtlSymbolLarge m_iszTravelSoundBack; // 0x58
	CUtlSymbolLarge[3] m_iszReversalSounds; // 0x68
	bool m_bPlayTravelSound; // 0x80
	bool m_bPlayReversalSound; // 0x81
};

// Aligment: 7
// Size: 96
struct TransitioningLayer_t
{
public:
	CNetworkedSequenceOperation m_op; // 0x8
	float m_flStartAnimTime; // 0x48
	float m_flStartWeight; // 0x4c
	float m_flAnimTime; // 0x50
	int32_t m_nOrder; // 0x54
	float m_flPlaybackRate; // 0x58
	float m_flFadeOutDuration; // 0x5c
};

// Aligment: 2
// Size: 200
class CFailableAchievement : public CBaseAchievement
{
public:
	bool m_bActivated; // 0xc0
	bool m_bFailed; // 0xc1
};

// Aligment: 2
// Size: 8
struct CEnvWindShared::WindVariationEvent_t
{
public:
	float m_flWindAngleVariation; // 0x0
	float m_flWindSpeedVariation; // 0x4
};

// Aligment: 4
// Size: 32
class ResponseParams
{
public:
	int16_t odds; // 0x10
	int16_t flags; // 0x12
	uint8_t soundlevel; // 0x14
	ResponseFollowup* m_pFollowup; // 0x18
};

// Aligment: 1
// Size: 24
class CStopwatch : public CStopwatchBase, CSimpleSimTimer
{
public:
	float m_interval; // 0x10
};

// Aligment: 6
// Size: 96
class CAI_Expresser
{
public:
	float m_flStopTalkTime; // 0x40
	float m_flStopTalkTimeWithoutDelay; // 0x44
	float m_flBlockedTalkTime; // 0x48
	int32_t m_voicePitch; // 0x4c
	float m_flLastTimeAcceptedSpeak; // 0x50
	CBaseFlex* m_pOuter; // 0x58
};

// Aligment: 2
// Size: 56
class CResponseCriteriaSet
{
public:
	int32_t m_nNumPrefixedContexts; // 0x30
	bool m_bOverrideOnAppend; // 0x34
};

// Aligment: 0
// Size: 232
class CNavVolumeMarkupVolume : public CNavVolume
{
public:
// <no members described>
};

// Aligment: 17
// Size: 216
class CEconItemView : public IEconItemInterface
{
public:
	// MNetworkEnable
	// MNetworkEnable
	item_definition_index_t m_iItemDefinitionIndex; // 0x8
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_iEntityQuality; // 0xc
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_iEntityLevel; // 0x10
	// MNetworkEnable
	// MNetworkEnable
	itemid_t m_iItemID; // 0x18
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_iAccountID; // 0x20
	// MNetworkEnable
	uint32_t m_iInventoryPosition; // 0x24
	// MNetworkEnable
	// MNetworkEnable
	bool m_bInitialized; // 0x30
	// MNetworkEnable
	// MNetworkEnable
	style_index_t m_nOverrideStyle; // 0x31
	bool m_bIsStoreItem; // 0x32
	bool m_bIsTradeItem; // 0x33
	bool m_bHasComputedAttachedParticles; // 0x34
	bool m_bHasAttachedParticles; // 0x35
	int32_t m_iEntityQuantity; // 0x38
	uint8_t m_unClientFlags; // 0x3c
	eEconItemOrigin m_unOverrideOrigin; // 0x40
	char* m_pszGrayedOutReason; // 0x50
	// MNetworkEnable
	// MNetworkEnable
	CAttributeList m_AttributeList; // 0x58
};

// Aligment: 1
// Size: 16
class CSkeletonAnimationController
{
public:
	// MNetworkDisable
	CSkeletonInstance* m_pSkeletonInstance; // 0x8
};

// Aligment: 2
// Size: 136
class CTimeOfDayDynamicKeys
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CUtlStringToken[16] m_FloatIDs; // 0x8
	// MNetworkEnable
	// MNetworkEnable
	CUtlStringToken[16] m_VectorIDs; // 0x48
};

// Aligment: 0
// Size: 8
class IBotController
{
public:
// <no members described>
};

// Aligment: 1
// Size: 152
class CNavVolumeSphericalShell : public CNavVolumeSphere, CNavVolume
{
public:
	float m_flRadiusInner; // 0x90
};

// Aligment: 3
// Size: 24
struct ResponseContext_t
{
public:
	CUtlSymbolLarge m_iszName; // 0x0
	CUtlSymbolLarge m_iszValue; // 0x8
	float m_fExpirationTime; // 0x10
};

// Aligment: 19
// Size: 112
class CEffectData
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vOrigin; // 0x8
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vStart; // 0x14
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vNormal; // 0x20
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder
	QAngle m_vAngles; // 0x2c
	// MNetworkEnable
	// MNetworkEnable
	CEntityHandle m_hEntity; // 0x38
	// MNetworkEnable
	// MNetworkEnable
	CEntityHandle m_hOtherEntity; // 0x3c
	// MNetworkEnable
	// MNetworkEnable
	float m_flScale; // 0x40
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1023"
	// MNetworkEncodeFlags
	float m_flMagnitude; // 0x44
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1023"
	// MNetworkEncodeFlags
	float m_flRadius; // 0x48
	// MNetworkEnable
	// MNetworkEnable
	CUtlStringToken m_nSurfaceProp; // 0x4c
	// MNetworkEnable
	// MNetworkEnable
	CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > m_nEffectIndex; // 0x50
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_nDamageType; // 0x58
	// MNetworkEnable
	// MNetworkEnable
	uint16_t m_nMaterial; // 0x5c
	// MNetworkEnable
	// MNetworkEnable
	uint16_t m_nHitBox; // 0x5e
	// MNetworkEnable
	// MNetworkEnable
	uint8_t m_nColor; // 0x60
	// MNetworkEnable
	// MNetworkEnable
	uint8_t m_fFlags; // 0x61
	// MNetworkEnable
	// MNetworkEnable
	int8_t m_nAttachmentIndex; // 0x62
	// MNetworkEnable
	// MNetworkEnable
	CUtlStringToken m_nAttachmentName; // 0x64
	// MNetworkEnable
	// MNetworkEnable
	uint16_t m_iEffectName; // 0x68
};

// Aligment: 3
// Size: 96
class CNetworkViewOffsetVector
{
public:
	// MNetworkBitCount "10"
	// MNetworkMinValue "-64"
	// MNetworkMaxValue "64"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkViewOffsetVector"
	CNetworkedQuantizedFloat m_vecX; // 0x18
	// MNetworkBitCount "10"
	// MNetworkMinValue "-64"
	// MNetworkMaxValue "64"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkViewOffsetVector"
	CNetworkedQuantizedFloat m_vecY; // 0x30
	// MNetworkBitCount "20"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "128"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkViewOffsetVector"
	CNetworkedQuantizedFloat m_vecZ; // 0x48
};

// Aligment: 6
// Size: 176
struct handposepair_t
{
public:
	matrix3x4_t[2] m_matHandPoseOffset; // 0x0
	Vector[2] m_vExtentOrigin; // 0x60
	float32[5][2] m_flHandPoseParams; // 0x78
	CUtlSymbolLarge m_poseSequenceName; // 0xa0
	int32_t m_nUseRange; // 0xa8
	bool m_bHasExtent; // 0xac
};

// Aligment: 3
// Size: 24
struct CAttributeManager::cached_attribute_float_t
{
public:
	float flIn; // 0x0
	CUtlSymbolLarge iAttribHook; // 0x8
	float flOut; // 0x10
};

// Aligment: 2
// Size: 8
struct ClusteredDistributionParams_t
{
public:
	float m_flClusterCoverageFraction; // 0x0
	float m_flClusterArea; // 0x4
};

// Aligment: 4
// Size: 64
struct constraint_hingeparams_t
{
public:
	Vector worldPosition; // 0x0
	Vector worldAxisDirection; // 0xc
	constraint_axislimit_t hingeAxis; // 0x18
	constraint_breakableparams_t constraint; // 0x28
};

// Aligment: 7
// Size: 616
class CTimeline : public IntervalTimer
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float32[64] m_flValues; // 0x10
	// MNetworkEnable
	// MNetworkEnable
	int32[64] m_nValueCounts; // 0x110
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nBucketCount; // 0x210
	// MNetworkEnable
	// MNetworkEnable
	float m_flInterval; // 0x214
	// MNetworkEnable
	// MNetworkEnable
	float m_flFinalValue; // 0x218
	// MNetworkEnable
	// MNetworkEnable
	TimelineCompression_t m_nCompressionType; // 0x21c
	// MNetworkEnable
	// MNetworkEnable
	bool m_bStopped; // 0x220
};

// Aligment: 7
// Size: 40
struct VPhysicsCollisionAttribute_t
{
public:
	// MNetworkEnable
	uint64_t m_nInteractsAs; // 0x8
	// MNetworkEnable
	uint64_t m_nInteractsWith; // 0x10
	// MNetworkEnable
	uint64_t m_nInteractsExclude; // 0x18
	// MNetworkEnable
	uint32_t m_nEntityId; // 0x20
	// MNetworkEnable
	uint16_t m_nHierarchyId; // 0x24
	// MNetworkEnable
	uint8_t m_nCollisionGroup; // 0x26
	// MNetworkEnable
	uint8_t m_nCollisionFunctionMask; // 0x27
};

// Aligment: 4
// Size: 16
struct constraint_axislimit_t
{
public:
	float flMinRotation; // 0x0
	float flMaxRotation; // 0x4
	float flMotorTargetAngSpeed; // 0x8
	float flMotorMaxTorque; // 0xc
};

// Aligment: 1
// Size: 4
class CSimpleSimTimer
{
public:
	float m_next; // 0x0
};

// Aligment: 3
// Size: 32
class SimpleConstraintSoundProfile
{
public:
	SimpleConstraintSoundProfile::SimpleConstraintsSoundProfileKeypoints_t eKeypoints; // 0x8
	float32[2] m_keyPoints; // 0xc
	float32[3] m_reversalSoundThresholds; // 0x14
};

// Aligment: 24
// Size: 176
struct HandInfo_t
{
public:
	// MNetworkEnable
	Vector m_vPosition; // 0xc
	// MNetworkEnable
	QAngle m_Angles; // 0x18
	// MNetworkEnable
	Vector m_vVelocity; // 0x24
	// MNetworkEnable
	float m_flSampleTime; // 0x30
	// MNetworkEnable
	Vector m_vFilteredPosition; // 0x34
	// MNetworkEnable
	QAngle m_FilteredAngles; // 0x40
	// MNetworkEnable
	Vector m_vFilteredVelocity; // 0x4c
	// MNetworkEnable
	Vector m_FilteredAngularVel; // 0x58
	// MNetworkEnable
	Vector m_vFilteredThrowVel; // 0x64
	// MNetworkEnable
	float m_flTriggerAnalogValue; // 0x70
	// MNetworkEnable
	float m_flGripAnalogValue; // 0x74
	// MNetworkEnable
	float m_flFinger0; // 0x78
	// MNetworkEnable
	float m_flFinger1; // 0x7c
	// MNetworkEnable
	float m_flFinger2; // 0x80
	// MNetworkEnable
	float m_flFinger3; // 0x84
	// MNetworkEnable
	float m_flFinger4; // 0x88
	// MNetworkEnable
	float m_flFingerSplay0; // 0x8c
	// MNetworkEnable
	float m_flFingerSplay1; // 0x90
	// MNetworkEnable
	float m_flFingerSplay2; // 0x94
	// MNetworkEnable
	float m_flFingerSplay3; // 0x98
	// MNetworkEnable
	float m_flTrackpadAnalogValueX; // 0x9c
	// MNetworkEnable
	float m_flTrackpadAnalogValueY; // 0xa0
	// MNetworkEnable
	float m_flJoystickAnalogValueX; // 0xa4
	// MNetworkEnable
	float m_flJoystickAnalogValueY; // 0xa8
};

// Aligment: 1
// Size: 112
class CResponseQueue
{
public:
	CUtlVector< CAI_Expresser* > m_ExpresserTargets; // 0x58
};

// Aligment: 12
// Size: 52
class CSound
{
public:
	CHandle< CBaseEntity > m_hOwner; // 0x0
	CHandle< CBaseEntity > m_hTarget; // 0x4
	int32_t m_iVolume; // 0x8
	float m_flOcclusionScale; // 0xc
	int32_t m_iType; // 0x10
	int32_t m_iNextAudible; // 0x14
	float m_flExpireTime; // 0x18
	int16_t m_iNext; // 0x1c
	bool m_bNoExpirationTime; // 0x1e
	int32_t m_ownerChannelIndex; // 0x20
	Vector m_vecOrigin; // 0x24
	bool m_bHasOwner; // 0x30
};

// Aligment: 9
// Size: 128
class CRagdoll : public IRagdoll
{
public:
	ragdoll_t m_ragdoll; // 0x8
	Vector m_mins; // 0x40
	Vector m_maxs; // 0x4c
	Vector m_origin; // 0x58
	float m_lastUpdate; // 0x64
	bool m_allAsleep; // 0x68
	Vector m_vecLastOrigin; // 0x6c
	float m_flLastOriginChangeTime; // 0x78
	float m_flAwakeTime; // 0x7c
public:
	static uint32_t &Get_s_globalCount() { return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CRagdoll")->m_static_fiels[0]->m_instance); }
};

// Aligment: 3
// Size: 48
class CHintMessage
{
public:
	char* m_hintString; // 0x8
	CUtlVector< char* > m_args; // 0x10
	float m_duration; // 0x28
};

// Aligment: 17
// Size: 168
class CCollisionProperty
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "CollisionAttributeChanged"
	VPhysicsCollisionAttribute_t m_collisionAttribute; // 0x10
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateOBB"
	Vector m_vecMins; // 0x38
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateOBB"
	Vector m_vecMaxs; // 0x44
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "2"
	// MNetworkChangeCallback "OnUpdateSolidFlags"
	uint8_t m_usSolidFlags; // 0x52
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateSolidType"
	SolidType_t m_nSolidType; // 0x53
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	uint8_t m_triggerBloat; // 0x54
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	SurroundingBoundsType_t m_nSurroundType; // 0x55
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "6"
	uint8_t m_CollisionGroup; // 0x56
	// MNetworkEnable
	// MNetworkEnable
	bool m_bHitboxEnabled; // 0x57
	float m_flRadius; // 0x58
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	Vector m_vecSpecifiedSurroundingMins; // 0x5c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	Vector m_vecSpecifiedSurroundingMaxs; // 0x68
	Vector m_vecSurroundingMaxs; // 0x74
	Vector m_vecSurroundingMins; // 0x80
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vCapsuleCenter1; // 0x8c
	// MNetworkEnable
	// MNetworkEnable
	Vector m_vCapsuleCenter2; // 0x98
	// MNetworkEnable
	// MNetworkEnable
	float m_flCapsuleRadius; // 0xa4
};

// Aligment: 2
// Size: 88
class CAttributeList
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkTypeAlias "CUtlVector< CEconItemAttribute >"
	CUtlVector< CEconItemAttribute > m_Attributes; // 0x8
	CAttributeManager* m_pManager; // 0x50
};

// Aligment: 15
// Size: 224
class CVRHandAttachmentInput
{
public:
	uint64_t m_nButtons; // 0x0
	uint64_t m_afButtonPressed; // 0x8
	uint64_t m_afButtonReleased; // 0x10
	float m_flTriggerAnalogValue; // 0x18
	float m_flGripAnalogValue; // 0x1c
	float m_flFinger0; // 0x20
	float m_flFinger1; // 0x24
	float m_flFinger2; // 0x28
	float m_flFinger3; // 0x2c
	float m_flFinger4; // 0x30
	float m_flTrackpadAnalogValueX; // 0x34
	float m_flTrackpadAnalogValueY; // 0x38
	float m_flJoystickAnalogValueX; // 0x3c
	float m_flJoystickAnalogValueY; // 0x40
	CPropVRHand* m_pHand; // 0xd8
};

// Aligment: 1
// Size: 2
struct ChangeAccessorFieldPathIndex_t
{
public:
	int16_t m_Value; // 0x0
};

// Aligment: 0
// Size: 96
class CGameObjectView
{
public:
// <no members described>
};

// Aligment: 0
// Size: 40
class CJiggleBones
{
public:
// <no members described>
};

// Aligment: 3
// Size: 48
class C_CHintMessageQueue
{
public:
	float m_tmMessageEnd; // 0x8
	CUtlVector< CHintMessage* > m_messages; // 0x10
	C_BasePlayer* m_pPlayer; // 0x28
};

// Aligment: 17
// Size: 216
class C_EconItemView : public IEconItemInterface
{
public:
	// MNetworkEnable
	// MNetworkEnable
	item_definition_index_t m_iItemDefinitionIndex; // 0x8
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_iEntityQuality; // 0xc
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_iEntityLevel; // 0x10
	// MNetworkEnable
	// MNetworkEnable
	itemid_t m_iItemID; // 0x18
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_iAccountID; // 0x20
	// MNetworkEnable
	uint32_t m_iInventoryPosition; // 0x24
	// MNetworkEnable
	// MNetworkEnable
	bool m_bInitialized; // 0x30
	// MNetworkEnable
	// MNetworkEnable
	style_index_t m_nOverrideStyle; // 0x31
	bool m_bIsStoreItem; // 0x32
	bool m_bIsTradeItem; // 0x33
	bool m_bHasComputedAttachedParticles; // 0x34
	bool m_bHasAttachedParticles; // 0x35
	int32_t m_iEntityQuantity; // 0x38
	uint8_t m_unClientFlags; // 0x3c
	eEconItemOrigin m_unOverrideOrigin; // 0x40
	char* m_pszGrayedOutReason; // 0x50
	// MNetworkEnable
	// MNetworkEnable
	CAttributeList m_AttributeList; // 0x58
};

// Aligment: 0
// Size: 8
class IClientAlphaProperty
{
public:
// <no members described>
};

// Aligment: 43
// Size: 1168
class CGlobalLightBase
{
public:
	bool m_bSpotLight; // 0x10
	Vector m_SpotLightOrigin; // 0x14
	QAngle m_SpotLightAngles; // 0x20
	Vector m_ShadowDirection; // 0x2c
	Vector m_AmbientDirection; // 0x38
	Vector m_SpecularDirection; // 0x44
	Vector m_InspectorSpecularDirection; // 0x50
	float m_flSpecularPower; // 0x5c
	float m_flSpecularIndependence; // 0x60
	Color m_SpecularColor; // 0x64
	bool m_bStartDisabled; // 0x68
	bool m_bEnabled; // 0x69
	Color m_LightColor; // 0x6a
	Color m_AmbientColor1; // 0x6e
	Color m_AmbientColor2; // 0x72
	Color m_AmbientColor3; // 0x76
	float m_flSunDistance; // 0x7c
	float m_flFOV; // 0x80
	float m_flNearZ; // 0x84
	float m_flFarZ; // 0x88
	bool m_bEnableShadows; // 0x8c
	bool m_bOldEnableShadows; // 0x8d
	bool m_bBackgroundClearNotRequired; // 0x8e
	float m_flCloudScale; // 0x90
	float m_flCloud1Speed; // 0x94
	float m_flCloud1Direction; // 0x98
	float m_flCloud2Speed; // 0x9c
	float m_flCloud2Direction; // 0xa0
	float m_flAmbientScale1; // 0xa4
	float m_flAmbientScale2; // 0xa8
	float m_flGroundScale; // 0xac
	float m_flLightScale; // 0xb0
	float m_flFoWDarkness; // 0xb4
	bool m_bEnableSeparateSkyboxFog; // 0xb8
	Vector m_vFowColor; // 0xbc
	Vector m_ViewOrigin; // 0xc8
	QAngle m_ViewAngles; // 0xd4
	float m_flViewFoV; // 0xe0
	Vector[8] m_WorldPoints; // 0xe4
	Vector2D m_vFogOffsetLayer0; // 0x478
	Vector2D m_vFogOffsetLayer1; // 0x480
	CHandle< C_BaseEntity > m_hEnvWind; // 0x488
	CHandle< C_BaseEntity > m_hEnvSky; // 0x48c
};

// Aligment: 14
// Size: 48
class CClientAlphaProperty : public IClientAlphaProperty
{
public:
	uint8_t m_nRenderFX; // 0x10
	uint8_t m_nRenderMode; // 0x11
	bitfield:1 m_bAlphaOverride; // 0x0
	bitfield:1 m_bShadowAlphaOverride; // 0x0
	bitfield:1 m_nDistanceFadeMode; // 0x0
	bitfield:4 m_nReserved; // 0x0
	uint8_t m_nAlpha; // 0x13
	uint16_t m_nDesyncOffset; // 0x14
	uint16_t m_nReserved2; // 0x16
	uint16_t m_nDistFadeStart; // 0x18
	uint16_t m_nDistFadeEnd; // 0x1a
	float m_flFadeScale; // 0x1c
	float m_flRenderFxStartTime; // 0x20
	float m_flRenderFxDuration; // 0x24
};

// Aligment: 3
// Size: 24
class C_PlayerState
{
public:
	bool deadflag; // 0x8
	bool hltv; // 0x9
	QAngle v_angle; // 0xc
};

// Aligment: 9
// Size: 400
class CDeferredLightBase
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "32"
	Color m_LightColor; // 0x10
	// MNetworkEnable
	// MNetworkEnable
	float m_flIntensity; // 0x14
	// MNetworkEnable
	// MNetworkEnable
	float m_flLightSize; // 0x18
	// MNetworkEnable
	// MNetworkEnable
	float m_flSpotFoV; // 0x1c
	// MNetworkEnable
	// MNetworkEnable
	QAngle m_vLightDirection; // 0x20
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartFalloff; // 0x2c
	// MNetworkEnable
	// MNetworkEnable
	float m_flDistanceFalloff; // 0x30
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_nFlags; // 0x34
	// MNetworkEnable
	// MNetworkEnable
	char[260] m_ProjectedTextureName; // 0x38
};

// Aligment: 0
// Size: 8
class C_SingleplayRules : public C_GameRules
{
public:
// <no members described>
};

// Aligment: 3
// Size: 32
class CViewAngleKeyFrame
{
public:
	QAngle m_vecAngles; // 0x8
	float m_flTime; // 0x14
	int32_t m_iFlags; // 0x18
};

// Aligment: 14
// Size: 64
struct C_fogplayerparams_t
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "PlayerFogController"
	CHandle< C_FogController > m_hCtrl; // 0x8
	float m_flTransitionTime; // 0xc
	Color m_OldColor; // 0x10
	float m_flOldStart; // 0x14
	float m_flOldEnd; // 0x18
	float m_flOldMaxDensity; // 0x1c
	float m_flOldHDRColorScale; // 0x20
	float m_flOldFarZ; // 0x24
	Color m_NewColor; // 0x28
	float m_flNewStart; // 0x2c
	float m_flNewEnd; // 0x30
	float m_flNewMaxDensity; // 0x34
	float m_flNewHDRColorScale; // 0x38
	float m_flNewFarZ; // 0x3c
};

// Aligment: 2
// Size: 24
class C_EconItemAttribute
{
public:
	// MNetworkEnable
	// MNetworkEnable
	uint16_t m_iAttributeDefinitionIndex; // 0x12
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkAlias "m_iRawValue32"
	float m_flValue; // 0x14
};

// Aligment: 0
// Size: 688
class CHeadlightEffect : public CFlashlightEffect
{
public:
// <no members described>
};

// Aligment: 1
// Size: 2112
class C_BaseAnimatingOverlayController : public C_BaseAnimatingController, CSkeletonAnimationController
{
public:
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkUserGroup "overlay_vars"
	// MNetworkChangeCallback "OnOverlaysChanged2"
	CUtlVector< CAnimationLayer > m_AnimOverlay; // 0x7d8
};

// Aligment: 0
// Size: 2008
class CDCGBaseAnimatingController : public C_BaseAnimatingController, CSkeletonAnimationController
{
public:
// <no members described>
};

// Aligment: 2
// Size: 824
class C_CommandContext
{
public:
	bool needsprocessing; // 0x0
	int32_t command_number; // 0x330
};

// Aligment: 30
// Size: 488
class CProjectedTextureBase
{
public:
	// MNetworkEnable
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTargetEntity; // 0xc
	// MNetworkEnable
	// MNetworkEnable
	bool m_bState; // 0x10
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAlwaysUpdate; // 0x11
	// MNetworkEnable
	// MNetworkEnable
	float m_flLightFOV; // 0x14
	// MNetworkEnable
	// MNetworkEnable
	bool m_bEnableShadows; // 0x18
	// MNetworkEnable
	// MNetworkEnable
	bool m_bSimpleProjection; // 0x19
	// MNetworkEnable
	// MNetworkEnable
	bool m_bLightOnlyTarget; // 0x1a
	// MNetworkEnable
	// MNetworkEnable
	bool m_bLightWorld; // 0x1b
	// MNetworkEnable
	// MNetworkEnable
	bool m_bCameraSpace; // 0x1c
	// MNetworkEnable
	// MNetworkEnable
	float m_flBrightnessScale; // 0x20
	// MNetworkEnable
	// MNetworkEnable
	Color m_LightColor; // 0x24
	// MNetworkEnable
	// MNetworkEnable
	float m_flIntensity; // 0x28
	// MNetworkEnable
	// MNetworkEnable
	float m_flLinearAttenuation; // 0x2c
	// MNetworkEnable
	// MNetworkEnable
	float m_flQuadraticAttenuation; // 0x30
	// MNetworkEnable
	// MNetworkEnable
	bool m_bVolumetric; // 0x34
	// MNetworkEnable
	// MNetworkEnable
	float m_flVolumetricIntensity; // 0x38
	// MNetworkEnable
	// MNetworkEnable
	float m_flNoiseStrength; // 0x3c
	// MNetworkEnable
	// MNetworkEnable
	float m_flFlashlightTime; // 0x40
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_nNumPlanes; // 0x44
	// MNetworkEnable
	// MNetworkEnable
	float m_flPlaneOffset; // 0x48
	// MNetworkEnable
	// MNetworkEnable
	float m_flColorTransitionTime; // 0x4c
	// MNetworkEnable
	// MNetworkEnable
	float m_flAmbient; // 0x50
	// MNetworkEnable
	// MNetworkEnable
	char[260] m_SpotlightTextureName; // 0x54
	// MNetworkEnable
	// MNetworkEnable
	int32_t m_nSpotlightTextureFrame; // 0x158
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "1"
	uint32_t m_nShadowQuality; // 0x15c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "16"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "500"
	// MNetworkEncodeFlags
	float m_flNearZ; // 0x160
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "18"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1500"
	// MNetworkEncodeFlags
	float m_flFarZ; // 0x164
	// MNetworkEnable
	// MNetworkEnable
	float m_flProjectionSize; // 0x168
	// MNetworkEnable
	// MNetworkEnable
	float m_flRotation; // 0x16c
	// MNetworkEnable
	// MNetworkEnable
	bool m_bFlipHorizontal; // 0x170
public:
	static float &Get_m_flVisibleBBoxMinHeight() { return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CProjectedTextureBase")->m_static_fiels[0]->m_instance); }
};

// Aligment: 0
// Size: 8
class C_GameRules
{
public:
// <no members described>
};

// Aligment: 4
// Size: 32
class CGlowSprite
{
public:
	Vector m_vColor; // 0x0
	float m_flHorzSize; // 0xc
	float m_flVertSize; // 0x10
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x18
};

// Aligment: 15
// Size: 688
class CFlashlightEffect
{
public:
	bool m_bIsOn; // 0x8
	bool m_bMuzzleFlashEnabled; // 0x18
	float m_flMuzzleFlashBrightness; // 0x1c
	Quaternion m_quatMuzzleFlashOrientation; // 0x20
	Vector m_vecMuzzleFlashOrigin; // 0x30
	float m_flDT; // 0x3c
	float m_flFov; // 0x40
	float m_flFarZ; // 0x44
	float m_flLinearAtten; // 0x48
	bool m_bCastsShadows; // 0x4c
	float m_flCurrentPullBackDist; // 0x50
	CStrongHandle< InfoForResourceTypeCTextureBase > m_FlashlightTexture; // 0x58
	CStrongHandle< InfoForResourceTypeCTextureBase > m_MuzzleFlashTexture; // 0x60
	CWeakHandle< InfoForResourceTypeCTextureBase > m_hCurrentFlashlightTexture; // 0x68
	char[64] m_textureName; // 0x70
};

// Aligment: 2
// Size: 8
class TimedEvent
{
public:
	float m_TimeBetweenEvents; // 0x0
	float m_fNextEvent; // 0x4
};

// Aligment: 5
// Size: 568
class C_CSequenceTransitioner2
{
public:
	CNetworkedSequenceOperation m_currentOp; // 0x8
	float m_flCurrentPlaybackRate; // 0x48
	float m_flCurrentAnimTime; // 0x4c
	TransitioningLayer_t[4] m_transitioningLayers; // 0x50
	C_BaseAnimatingController* m_pOwner; // 0x1d0
};

// Aligment: 5
// Size: 20
class CInterpolatedValue
{
public:
	float m_flStartTime; // 0x0
	float m_flEndTime; // 0x4
	float m_flStartValue; // 0x8
	float m_flEndValue; // 0xc
	int32_t m_nInterpType; // 0x10
};

// Aligment: 10
// Size: 96
class JiggleData
{
public:
	int32_t bone; // 0x0
	int32_t id; // 0x4
	float lastUpdate; // 0x8
	Vector basePos; // 0xc
	Vector baseLastPos; // 0x18
	Vector baseVel; // 0x24
	Vector baseAccel; // 0x30
	Vector tipPos; // 0x3c
	Vector tipVel; // 0x48
	Vector tipAccel; // 0x54
};

// Aligment: 22
// Size: 2008
class C_BaseAnimatingController : public CSkeletonAnimationController
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "baseAnimBaseLayerChanged"
	CNetworkedSequenceOperation m_baseLayer; // 0x18
	// MNetworkEnable
	CAnimGraphNetworkedVariables m_animGraphNetworkedVars; // 0x58
	// MNetworkDisable
	bool m_bSequenceFinished; // 0x400
	// MNetworkDisable
	float m_flGroundSpeed; // 0x404
	// MNetworkDisable
	float m_flLastEventCycle; // 0x408
	// MNetworkDisable
	float m_flLastEventAnimTime; // 0x40c
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "-4"
	// MNetworkMaxValue "12"
	// MNetworkEncodeFlags
	// MNetworkPriority "64"
	// MNetworkChangeCallback "playbackRateChanged"
	CNetworkedQuantizedFloat m_flPlaybackRate; // 0x410
	// MNetworkDisable
	float m_flPrevAnimTime; // 0x428
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1"
	// MNetworkUserGroup "m_flPoseParameter"
	// MNetworkChangeCallback "poseParametersChanged"
	float32[24] m_flPoseParameter; // 0x42c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkChangeCallback "clientSideAnimationChanged"
	bool m_bClientSideAnimation; // 0x48c
	// MNetworkDisable
	bool m_bNetworkedAnimationInputsChanged; // 0x48d
	// MNetworkDisable
	uint8_t m_nPrevNewSequenceParity; // 0x48e
	// MNetworkDisable
	uint8_t m_nPrevResetEventsParity; // 0x48f
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	// MNetworkPriority "64"
	// MNetworkChangeCallback "clientSideAnimCycleReset"
	int32_t m_nNewSequenceParity; // 0x490
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "3"
	// MNetworkPriority "64"
	int32_t m_nResetEventsParity; // 0x494
	// MNetworkDisable
	float m_flIKGroundContactTime; // 0x498
	// MNetworkDisable
	float m_flIKGroundMinHeight; // 0x49c
	// MNetworkDisable
	float m_flIKGroundMaxHeight; // 0x4a0
	// MNetworkDisable
	float m_flIkZAdjustAmount; // 0x4a4
	// MNetworkDisable
	C_CSequenceTransitioner2 m_SequenceTransitioner; // 0x4b8
	// MNetworkDisable
	HSequence m_hLastAnimEventSequence; // 0x728
	// MNetworkDisable
	uint32_t m_ClientSideAnimationListHandle; // 0x72c
};

// Aligment: 28
// Size: 464
class C_PlayerLocalData
{
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	ChangeAccessorFieldPathIndex_t m_NetworkVar_PathIndex; // 0x8
	// MNetworkEnable
	// MNetworkEnable
	uint8[32] m_chAreaBits; // 0x18
	// MNetworkEnable
	// MNetworkEnable
	uint8[24] m_chAreaPortalBits; // 0x38
	int32_t m_nStepside; // 0x50
	int32_t m_nOldButtons; // 0x54
	// MNetworkEnable
	// MNetworkEnable
	float m_flFOVRate; // 0x58
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "12"
	uint32_t m_iHideHUD; // 0x5c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkPriority "64"
	uint32_t m_nDuckTimeMsecs; // 0x60
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint32_t m_nDuckJumpTimeMsecs; // 0x64
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint32_t m_nJumpTimeMsecs; // 0x68
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "17"
	// MNetworkMinValue "-4096"
	// MNetworkMaxValue "4096"
	float m_flFallVelocity; // 0x6c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "16"
	// MNetworkEncodeFlags
	// MNetworkMinValue "0"
	// MNetworkMaxValue "128"
	float m_flStepSize; // 0x70
	// MNetworkEnable
	// MNetworkPriority "64"
	// MNetworkBitCount "32"
	QAngle m_vecPunchAngle; // 0x78
	// MNetworkEnable
	// MNetworkBitCount "32"
	QAngle m_vecPunchAngleVel; // 0x90
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDucked; // 0xa8
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDucking; // 0xa9
	// MNetworkEnable
	// MNetworkEnable
	bool m_bInDuckJump; // 0xaa
	// MNetworkEnable
	// MNetworkEnable
	bool m_bDrawViewmodel; // 0xab
	// MNetworkEnable
	// MNetworkEnable
	bool m_bWearingSuit; // 0xac
	// MNetworkEnable
	// MNetworkEnable
	bool m_bPoisoned; // 0xad
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAllowAutoMovement; // 0xae
	// MNetworkEnable
	// MNetworkEnable
	bool m_bSlowMovement; // 0xaf
	// MNetworkEnable
	// MNetworkEnable
	bool m_bAutoAimTarget; // 0xb0
	// MNetworkEnable
	// MNetworkEnable
	sky3dparams_t m_skybox3d; // 0xb8
	// MNetworkEnable
	// MNetworkEnable
	audioparams_t m_audio; // 0x140
	bool m_bInLanding; // 0x1b8
	float m_flLandingTime; // 0x1bc
	Vector m_vecClientBaseVelocity; // 0x1c0
};

// Aligment: 15
// Size: 208
class CGlowOverlay
{
public:
	Vector m_vPos; // 0x8
	bool m_bDirectional; // 0x14
	Vector m_vDirection; // 0x18
	bool m_bInSky; // 0x24
	float m_skyObstructionScale; // 0x28
	CGlowSprite[4] m_Sprites; // 0x30
	int32_t m_nSprites; // 0xb0
	float m_flProxyRadius; // 0xb4
	float m_flHDRColorScale; // 0xb8
	float m_flGlowObstructionScale; // 0xbc
	bool m_bCacheGlowObstruction; // 0xc0
	bool m_bCacheSkyObstruction; // 0xc1
	int16_t m_bActivated; // 0xc2
	int16_t m_ListIndex; // 0xc4
	int32_t m_queryHandle; // 0xc8
};

// Aligment: 2
// Size: 8
struct C_CEnvWindShared::WindAveEvent_t
{
public:
	float m_flStartWindSpeed; // 0x0
	float m_flAveWindSpeed; // 0x4
};

// Aligment: 29
// Size: 560
class C_CEnvWindShared
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float m_flStartTime; // 0x8
	// MNetworkEnable
	// MNetworkEnable
	uint32_t m_iWindSeed; // 0xc
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint16_t m_iMinWind; // 0x10
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint16_t m_iMaxWind; // 0x12
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "14"
	int32_t m_windRadius; // 0x14
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint16_t m_iMinGust; // 0x18
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "10"
	uint16_t m_iMaxGust; // 0x1a
	// MNetworkEnable
	// MNetworkEnable
	float m_flMinGustDelay; // 0x1c
	// MNetworkEnable
	// MNetworkEnable
	float m_flMaxGustDelay; // 0x20
	// MNetworkEnable
	// MNetworkEnable
	float m_flGustDuration; // 0x24
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "9"
	uint16_t m_iGustDirChange; // 0x28
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_location; // 0x2c
	int32_t m_iszGustSound; // 0x38
	int32_t m_iWindDir; // 0x3c
	float m_flWindSpeed; // 0x40
	Vector m_currentWindVector; // 0x44
	Vector m_CurrentSwayVector; // 0x50
	Vector m_PrevSwayVector; // 0x5c
	// MNetworkEnable
	// MNetworkEnable
	// MNetworkBitCount "9"
	uint16_t m_iInitialWindDir; // 0x68
	// MNetworkEnable
	// MNetworkEnable
	float m_flInitialWindSpeed; // 0x6c
	float m_flVariationTime; // 0x70
	float m_flSwayTime; // 0x74
	float m_flSimTime; // 0x78
	float m_flSwitchTime; // 0x7c
	float m_flAveWindSpeed; // 0x80
	bool m_bGusting; // 0x84
	float m_flWindAngleVariation; // 0x88
	float m_flWindSpeedVariation; // 0x8c
	CEntityIndex m_iEntIndex; // 0x90
};

// Aligment: 11
// Size: 152
class CDecalInfo
{
public:
	float m_flSpecExp; // 0x0
	float m_flAnimationScale; // 0x4
	float m_flAnimationLifeSpan; // 0x8
	float m_flPlaceTime; // 0xc
	float m_flFadeStartTime; // 0x10
	float m_flFadeDuration; // 0x14
	int32_t m_nVBSlot; // 0x18
	int32_t m_nBoneIndex; // 0x1c
	CDecalInfo* m_pNext; // 0x28
	CDecalInfo* m_pPrev; // 0x30
	int32_t m_nDecalMaterialIndex; // 0x90
};

// Aligment: 1
// Size: 56
struct PostProcessParameters_t
{
public:
	// MNetworkEnable
	// MNetworkEnable
	float32[12] m_flParameters; // 0x8
};

// Aligment: 4
// Size: 40
class C_CSequenceTransitioner
{
public:
	CUtlVector< CAnimationLayer > m_animationQueue; // 0x0
	bool m_bIsInSimulation; // 0x18
	float m_flSimOrRenderTime; // 0x1c
	float m_flInterpolatedTime; // 0x20
};

// Aligment: 2
// Size: 8
struct C_CEnvWindShared::WindVariationEvent_t
{
public:
	float m_flWindAngleVariation; // 0x0
	float m_flWindSpeedVariation; // 0x4
};

// Aligment: 0
// Size: 32
class C_MultiplayRules : public C_GameRules
{
public:
// <no members described>
};

