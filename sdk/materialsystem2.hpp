#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: materialsystem2.dll
// Class Count: 13
// Enum Count: 5
///////////////////////////////////////////

// Aligment: 4
// Size: 4
enum class HorizJustification_e : uint32_t
{
	HORIZ_JUSTIFICATION_LEFT = 0x0,
	HORIZ_JUSTIFICATION_CENTER = 0x1,
	HORIZ_JUSTIFICATION_RIGHT = 0x2,
	HORIZ_JUSTIFICATION_NONE = 0x3,
};

// Aligment: 4
// Size: 4
enum class VertJustification_e : uint32_t
{
	VERT_JUSTIFICATION_TOP = 0x0,
	VERT_JUSTIFICATION_CENTER = 0x1,
	VERT_JUSTIFICATION_BOTTOM = 0x2,
	VERT_JUSTIFICATION_NONE = 0x3,
};

// Aligment: 4
// Size: 3
enum class LayoutPositionType_e : uint32_t
{
	LAYOUTPOSITIONTYPE_VIEWPORT_RELATIVE = 0x0,
	LAYOUTPOSITIONTYPE_FRACTIONAL = 0x1,
	LAYOUTPOSITIONTYPE_NONE = 0x2,
};

// Aligment: 4
// Size: 3
enum class BloomBlendMode_t : uint32_t
{
	BLOOM_BLEND_ADD = 0x0,
	BLOOM_BLEND_SCREEN = 0x1,
	BLOOM_BLEND_BLUR = 0x2,
};

// Aligment: 4
// Size: 3
enum class ViewFadeMode_t : uint32_t
{
	VIEW_FADE_CONSTANT_COLOR = 0x0,
	VIEW_FADE_MODULATE = 0x1,
	VIEW_FADE_MOD2X = 0x2,
};

// Aligment: 1
// Size: 8
struct MaterialParam_t
{
public:
	CUtlString m_name; // 0x0
};

// Aligment: 1
// Size: 16
struct MaterialParamInt_t : public MaterialParam_t
{
public:
	int32_t m_nValue; // 0x8
};

// Aligment: 1
// Size: 16
struct MaterialParamFloat_t : public MaterialParam_t
{
public:
	float m_flValue; // 0x8
};

// Aligment: 1
// Size: 24
struct MaterialParamVector_t : public MaterialParam_t
{
public:
	Vector4D m_value; // 0x8
};

// Aligment: 1
// Size: 16
struct MaterialParamTexture_t : public MaterialParam_t
{
public:
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pValue; // 0x8
};

// Aligment: 1
// Size: 16
struct MaterialParamString_t : public MaterialParam_t
{
public:
	CUtlString m_value; // 0x8
};

// Aligment: 1
// Size: 32
struct MaterialParamBuffer_t : public MaterialParam_t
{
public:
	CUtlBinaryBlock m_value; // 0x8
};

// Aligment: 14
// Size: 304
struct MaterialResourceData_t
{
public:
	CUtlString m_materialName; // 0x0
	CUtlString m_shaderName; // 0x8
	CUtlVector< MaterialParamInt_t > m_intParams; // 0x10
	CUtlVector< MaterialParamFloat_t > m_floatParams; // 0x28
	CUtlVector< MaterialParamVector_t > m_vectorParams; // 0x40
	CUtlVector< MaterialParamTexture_t > m_textureParams; // 0x58
	CUtlVector< MaterialParamBuffer_t > m_dynamicParams; // 0x70
	CUtlVector< MaterialParamBuffer_t > m_dynamicTextureParams; // 0x88
	CUtlVector< MaterialParamInt_t > m_intAttributes; // 0xa0
	CUtlVector< MaterialParamFloat_t > m_floatAttributes; // 0xb8
	CUtlVector< MaterialParamVector_t > m_vectorAttributes; // 0xd0
	CUtlVector< MaterialParamTexture_t > m_textureAttributes; // 0xe8
	CUtlVector< MaterialParamString_t > m_stringAttributes; // 0x100
	CUtlVector< CUtlString > m_renderAttributesUsed; // 0x118
};

// Aligment: 8
// Size: 32
struct PostProcessingTonemapParameters_t
{
public:
	float m_flExposureBias; // 0x0
	float m_flShoulderStrength; // 0x4
	float m_flLinearStrength; // 0x8
	float m_flLinearAngle; // 0xc
	float m_flToeStrength; // 0x10
	float m_flToeNum; // 0x14
	float m_flToeDenom; // 0x18
	float m_flWhitePoint; // 0x1c
};

// Aligment: 10
// Size: 112
struct PostProcessingBloomParameters_t
{
public:
	BloomBlendMode_t m_blendMode; // 0x0
	float m_flBloomStrength; // 0x4
	float m_flScreenBloomStrength; // 0x8
	float m_flBlurBloomStrength; // 0xc
	float m_flBloomThreshold; // 0x10
	float m_flBloomThresholdWidth; // 0x14
	float m_flSkyboxBloomStrength; // 0x18
	float m_flBloomStartValue; // 0x1c
	float32[5] m_flBlurWeight; // 0x20
	Vector[5] m_vBlurTint; // 0x34
};

// Aligment: 6
// Size: 36
struct PostProcessingVignetteParameters_t
{
public:
	float m_flVignetteStrength; // 0x0
	Vector2D m_vCenter; // 0x4
	float m_flRadius; // 0xc
	float m_flRoundness; // 0x10
	float m_flFeather; // 0x14
	Vector m_vColorTint; // 0x18
};

// Aligment: 5
// Size: 20
struct PostProcessingLocalContrastParameters_t
{
public:
	float m_flLocalContrastStrength; // 0x0
	float m_flLocalContrastEdgeStrength; // 0x4
	float m_flLocalContrastVignetteStart; // 0x8
	float m_flLocalContrastVignetteEnd; // 0xc
	float m_flLocalContrastVignetteBlur; // 0x10
};

// Aligment: 11
// Size: 256
struct PostProcessingResource_t
{
public:
	bool m_bHasTonemapParams; // 0x0
	PostProcessingTonemapParameters_t m_toneMapParams; // 0x4
	bool m_bHasBloomParams; // 0x24
	PostProcessingBloomParameters_t m_bloomParams; // 0x28
	bool m_bHasVignetteParams; // 0x98
	PostProcessingVignetteParameters_t m_vignetteParams; // 0x9c
	bool m_bHasLocalContrastParams; // 0xc0
	PostProcessingLocalContrastParameters_t m_localConstrastParams; // 0xc4
	int32_t m_nColorCorrectionVolumeDim; // 0xd8
	CUtlBinaryBlock m_colorCorrectionVolumeData; // 0xe0
	bool m_bHasColorCorrection; // 0xf8
};

