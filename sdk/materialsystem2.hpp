#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: materialsystem2.dll
// Class Count: 13
// Enum Count: 0
///////////////////////////////////////////

// Aligment: 1
// Size: 4
struct MaterialParam_t
{
public:
	CResourceString m_name; // 0x0
};

// Aligment: 1
// Size: 8
struct MaterialParamInt_t : public MaterialParam_t
{
public:
	int32_t m_nValue; // 0x4
};

// Aligment: 1
// Size: 8
struct MaterialParamFloat_t : public MaterialParam_t
{
public:
	float m_flValue; // 0x4
};

// Aligment: 1
// Size: 20
struct MaterialParamVector_t : public MaterialParam_t
{
public:
	Vector4D m_value; // 0x4
};

// Aligment: 1
// Size: 16
struct MaterialParamTexture_t : public MaterialParam_t
{
public:
	CResourceExtReference< CWeakHandle< InfoForResourceTypeCTextureBase > > m_pValue; // 0x8
};

// Aligment: 1
// Size: 8
struct MaterialParamString_t : public MaterialParam_t
{
public:
	CResourceString m_value; // 0x4
};

// Aligment: 1
// Size: 12
struct MaterialParamBuffer_t : public MaterialParam_t
{
public:
	CResourceArray< uint8 > m_value; // 0x4
};

// Aligment: 14
// Size: 104
struct MaterialResourceData_t
{
public:
	CResourceString m_materialName; // 0x0
	CResourceString m_shaderName; // 0x4
	CResourceArray< MaterialParamInt_t > m_intParams; // 0x8
	CResourceArray< MaterialParamFloat_t > m_floatParams; // 0x10
	CResourceArray< MaterialParamVector_t > m_vectorParams; // 0x18
	CResourceArray< MaterialParamTexture_t > m_textureParams; // 0x20
	CResourceArray< MaterialParamBuffer_t > m_dynamicParams; // 0x28
	CResourceArray< MaterialParamBuffer_t > m_dynamicTextureParams; // 0x30
	CResourceArray< MaterialParamInt_t > m_intAttributes; // 0x38
	CResourceArray< MaterialParamFloat_t > m_floatAttributes; // 0x40
	CResourceArray< MaterialParamVector_t > m_vectorAttributes; // 0x48
	CResourceArray< MaterialParamTexture_t > m_textureAttributes; // 0x50
	CResourceArray< MaterialParamString_t > m_stringAttributes; // 0x58
	CResourceArray< CResourceString > m_renderAttributesUsed; // 0x60
};

// Aligment: 2
// Size: 16
struct VBitmapFontDiskData_t
{
public:
	CResourceExtReference< CWeakHandle< InfoForResourceTypeCTextureBase > > m_TextureSheet; // 0x0
	CResourceArray< uint8 > m_Glyphs; // 0x8
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

// Aligment: 8
// Size: 204
struct PostProcessingResource_t
{
public:
	bool m_bHasTonemapParams; // 0x0
	PostProcessingTonemapParameters_t m_toneMapParams; // 0x4
	bool m_bHasBloomParams; // 0x24
	PostProcessingBloomParameters_t m_bloomParams; // 0x28
	bool m_bHasVignetteParams; // 0x98
	PostProcessingVignetteParameters_t m_vignetteParams; // 0x9c
	int32_t m_nColorCorrectionVolumeDim; // 0xc0
	CResourceArray< Color > m_colorCorrectionVolumeData; // 0xc4
};

