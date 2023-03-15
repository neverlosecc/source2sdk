#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: rendersystemdx11.dll
// Class Count: 10
// Enum Count: 0
///////////////////////////////////////////

// Aligment: 6
// Size: 12
struct TextureDesc_t
{
public:
	uint16_t m_nWidth; // 0x0
	uint16_t m_nHeight; // 0x2
	uint16_t m_nDepth; // 0x4
	int8_t m_nImageFormat; // 0x6
	uint8_t m_nNumMipLevels; // 0x7
	int32_t m_nPicmip0Res; // 0x8
};

// Aligment: 7
// Size: 1404
struct TextureHeader_t : public TextureDesc_t
{
public:
	uint16_t m_nMultisampleType; // 0xc
	uint16_t m_nFlags; // 0xe
	Vector4D m_Reflectivity; // 0x10
	CResourcePointer< Sheet_t > m_pSheet; // 0x20
	int32_t m_nSheetSize; // 0x24
	uint8[1360] m_fallbackTextureBits; // 0x28
	int32_t m_nPicmip0Res; // 0x578
};

// Aligment: 2
// Size: 8
struct SequenceFloatParam_t
{
public:
	CResourceString m_name; // 0x0
	float m_value; // 0x4
};

// Aligment: 9
// Size: 32
struct SheetSequence_t
{
public:
	uint32_t m_nId; // 0x0
	bool m_bClamp; // 0x4
	bool m_bAlphaCrop; // 0x5
	bool m_bNoColor; // 0x6
	bool m_bNoAlpha; // 0x7
	CResourceArray< SheetSequenceFrame_t > m_Frames; // 0x8
	float m_flTotalTime; // 0x10
	CResourceString m_name; // 0x14
	CResourceArray< SequenceFloatParam_t > m_floatParams; // 0x18
};

// Aligment: 2
// Size: 12
struct SheetSequenceFrame_t
{
public:
	float m_flDisplayTime; // 0x0
	CResourceArray< SheetFrameImage_t > m_Images; // 0x4
};

// Aligment: 2
// Size: 32
struct SheetFrameImage_t
{
public:
	Vector2D[2] uvCropped; // 0x0
	Vector2D[2] uvUncropped; // 0x10
};

// Aligment: 1
// Size: 8
struct Sheet_t
{
public:
	CResourceArray< SheetSequence_t > m_Sequences; // 0x0
};

// Aligment: 7
// Size: 56
struct RenderInputLayoutField_t
{
public:
	uint8[32] m_pSemanticName; // 0x0
	int32_t m_nSemanticIndex; // 0x20
	uint32_t m_Format; // 0x24
	int32_t m_nOffset; // 0x28
	int32_t m_nSlot; // 0x2c
	RenderSlotType_t m_nSlotType; // 0x30
	int32_t m_nInstanceStepRate; // 0x34
};

// Aligment: 4
// Size: 196
struct VsInputSignatureElement_t
{
public:
	char[64] m_pName; // 0x0
	char[64] m_pSemantic; // 0x40
	char[64] m_pD3DSemanticName; // 0x80
	int32_t m_nD3DSemanticIndex; // 0xc0
};

// Aligment: 1
// Size: 24
struct VsInputSignature_t
{
public:
	CUtlVector< VsInputSignatureElement_t > m_elems; // 0x0
};

