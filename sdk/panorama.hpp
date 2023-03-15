#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: panorama.dll
// Class Count: 0
// Enum Count: 2
///////////////////////////////////////////

// Aligment: 4
// Size: 13
enum class ELayoutNodeType : uint32_t
{
	ROOT = 0x0,
	STYLES = 0x1,
	SCRIPT_BODY = 0x2,
	SCRIPTS = 0x3,
	SNIPPETS = 0x4,
	INCLUDE = 0x5,
	SNIPPET = 0x6,
	PANEL = 0x7,
	PANEL_ATTRIBUTE = 0x8,
	PANEL_ATTRIBUTE_VALUE = 0x9,
	REFERENCE_CONTENT = 0xa,
	REFERENCE_COMPILED = 0xb,
	REFERENCE_PASSTHROUGH = 0xc,
};

// Aligment: 4
// Size: 14
enum class EStyleNodeType : uint32_t
{
	ROOT = 0x0,
	EXPRESSION = 0x1,
	PROPERTY = 0x2,
	DEFINE = 0x3,
	IMPORT = 0x4,
	KEYFRAMES = 0x5,
	SELECTOR = 0x6,
	WHITESPACE = 0x7,
	EXPRESSION_TEXT = 0x8,
	EXPRESSION_URL = 0x9,
	EXPRESSION_CONCAT = 0xa,
	REFERENCE_CONTENT = 0xb,
	REFERENCE_COMPILED = 0xc,
	REFERENCE_PASSTHROUGH = 0xd,
};

