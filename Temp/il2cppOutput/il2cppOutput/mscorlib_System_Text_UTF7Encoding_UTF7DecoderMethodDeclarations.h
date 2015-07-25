#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.UTF7Encoding/UTF7Decoder
struct UTF7Decoder_t2443;
// System.Byte[]
struct ByteU5BU5D_t679;
// System.Char[]
struct CharU5BU5D_t410;

// System.Void System.Text.UTF7Encoding/UTF7Decoder::.ctor()
extern "C" void UTF7Decoder__ctor_m13615 (UTF7Decoder_t2443 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding/UTF7Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t UTF7Decoder_GetChars_m13616 (UTF7Decoder_t2443 * __this, ByteU5BU5D_t679* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t410* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
