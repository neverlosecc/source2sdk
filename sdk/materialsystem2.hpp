#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: materialsystem2.dll
// Classes count: 13
// Enums count: 5
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Alignment: 4
// Size: 0x4
enum class HorizJustification_e : uint32_t
{
	HORIZ_JUSTIFICATION_LEFT = 0x0,
	HORIZ_JUSTIFICATION_CENTER = 0x1,
	HORIZ_JUSTIFICATION_RIGHT = 0x2,
	HORIZ_JUSTIFICATION_NONE = 0x3,
};

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Alignment: 4
// Size: 0x4
enum class VertJustification_e : uint32_t
{
	VERT_JUSTIFICATION_TOP = 0x0,
	VERT_JUSTIFICATION_CENTER = 0x1,
	VERT_JUSTIFICATION_BOTTOM = 0x2,
	VERT_JUSTIFICATION_NONE = 0x3,
};

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Alignment: 4
// Size: 0x3
enum class LayoutPositionType_e : uint32_t
{
	LAYOUTPOSITIONTYPE_VIEWPORT_RELATIVE = 0x0,
	LAYOUTPOSITIONTYPE_FRACTIONAL = 0x1,
	LAYOUTPOSITIONTYPE_NONE = 0x2,
};

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Alignment: 4
// Size: 0x3
enum class BloomBlendMode_t : uint32_t
{
	BLOOM_BLEND_ADD = 0x0,
	BLOOM_BLEND_SCREEN = 0x1,
	BLOOM_BLEND_BLUR = 0x2,
};

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Alignment: 4
// Size: 0x3
enum class ViewFadeMode_t : uint32_t
{
	VIEW_FADE_CONSTANT_COLOR = 0x0,
	VIEW_FADE_MODULATE = 0x1,
	VIEW_FADE_MOD2X = 0x2,
};

struct PostProcessingTonemapParameters_t;
struct PostProcessingBloomParameters_t;
struct PostProcessingVignetteParameters_t;
struct PostProcessingLocalContrastParameters_t;

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Alignment: 8
// Size: 0x8
// 
// MGetKV3ClassDefaults
struct MaterialParam_t
{
public:
	CUtlString m_name; // 0x0	
};

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Alignment: 8
// Size: 0x10
// 
// MGetKV3ClassDefaults
struct MaterialParamInt_t : public MaterialParam_t
{
public:
	int32_t m_nValue; // 0x8	
};

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Alignment: 8
// Size: 0x10
// 
// MGetKV3ClassDefaults
struct MaterialParamFloat_t : public MaterialParam_t
{
public:
	float m_flValue; // 0x8	
};

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Alignment: 8
// Size: 0x18
// 
// MGetKV3ClassDefaults
struct MaterialParamVector_t : public MaterialParam_t
{
public:
	Vector4D m_value; // 0x8	
};

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Alignment: 8
// Size: 0x10
// 
// MGetKV3ClassDefaults
struct MaterialParamTexture_t : public MaterialParam_t
{
public:
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pValue; // 0x8	
};

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Alignment: 8
// Size: 0x10
// 
// MGetKV3ClassDefaults
struct MaterialParamString_t : public MaterialParam_t
{
public:
	CUtlString m_value; // 0x8	
};

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Alignment: 8
// Size: 0x20
// 
// MGetKV3ClassDefaults
struct MaterialParamBuffer_t : public MaterialParam_t
{
public:
	CUtlBinaryBlock m_value; // 0x8	
};

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Alignment: 8
// Size: 0x130
// 
// MGetKV3ClassDefaults
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

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Alignment: 4
// Size: 0x3c
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
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
	float m_flLuminanceSource; // 0x20	
	float m_flExposureBiasShadows; // 0x24	
	float m_flExposureBiasHighlights; // 0x28	
	float m_flMinShadowLum; // 0x2c	
	float m_flMaxShadowLum; // 0x30	
	float m_flMinHighlightLum; // 0x34	
	float m_flMaxHighlightLum; // 0x38	
};

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Alignment: 4
// Size: 0x70
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
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
	float m_flBlurWeight[5]; // 0x20	
	Vector m_vBlurTint[5]; // 0x34	
};

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Alignment: 4
// Size: 0x24
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
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

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Alignment: 4
// Size: 0x14
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct PostProcessingLocalContrastParameters_t
{
public:
	float m_flLocalContrastStrength; // 0x0	
	float m_flLocalContrastEdgeStrength; // 0x4	
	float m_flLocalContrastVignetteStart; // 0x8	
	float m_flLocalContrastVignetteEnd; // 0xc	
	float m_flLocalContrastVignetteBlur; // 0x10	
};

// Registered binary: materialsystem2.dll (project 'materialsystem2')
// Alignment: 8
// Size: 0x118
// 
// MGetKV3ClassDefaults
struct PostProcessingResource_t
{
public:
	bool m_bHasTonemapParams; // 0x0	
	PostProcessingTonemapParameters_t m_toneMapParams; // 0x4	
	bool m_bHasBloomParams; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0041[0x3]; // 0x41
public:
	// -> m_blendMode - 0x44
	// -> m_flBloomStrength - 0x48
	// -> m_flScreenBloomStrength - 0x4c
	// -> m_flBlurBloomStrength - 0x50
	// -> m_flBloomThreshold - 0x54
	// -> m_flBloomThresholdWidth - 0x58
	// -> m_flSkyboxBloomStrength - 0x5c
	// -> m_flBloomStartValue - 0x60
	// -> m_flBlurWeight[5] - 0x64
	// -> m_vBlurTint[5] - 0x78
	PostProcessingBloomParameters_t m_bloomParams; // 0x44	
	bool m_bHasVignetteParams; // 0xb4	
private:
	[[maybe_unused]] uint8_t __pad00b5[0x3]; // 0xb5
public:
	// -> m_flVignetteStrength - 0xb8
	// -> m_vCenter - 0xbc
	// -> m_flRadius - 0xc4
	// -> m_flRoundness - 0xc8
	// -> m_flFeather - 0xcc
	// -> m_vColorTint - 0xd0
	PostProcessingVignetteParameters_t m_vignetteParams; // 0xb8	
	bool m_bHasLocalContrastParams; // 0xdc	
private:
	[[maybe_unused]] uint8_t __pad00dd[0x3]; // 0xdd
public:
	// -> m_flLocalContrastStrength - 0xe0
	// -> m_flLocalContrastEdgeStrength - 0xe4
	// -> m_flLocalContrastVignetteStart - 0xe8
	// -> m_flLocalContrastVignetteEnd - 0xec
	// -> m_flLocalContrastVignetteBlur - 0xf0
	PostProcessingLocalContrastParameters_t m_localConstrastParams; // 0xe0	
	int32_t m_nColorCorrectionVolumeDim; // 0xf4	
	CUtlBinaryBlock m_colorCorrectionVolumeData; // 0xf8	
	bool m_bHasColorCorrection; // 0x110	
};

