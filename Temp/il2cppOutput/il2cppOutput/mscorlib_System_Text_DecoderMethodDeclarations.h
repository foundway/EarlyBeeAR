#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Decoder
struct Decoder_t2153;
// System.Text.DecoderFallback
struct DecoderFallback_t2427;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t2426;
// System.Byte[]
struct ByteU5BU5D_t679;
// System.Char[]
struct CharU5BU5D_t410;

// System.Void System.Text.Decoder::.ctor()
extern "C" void Decoder__ctor_m13467 (Decoder_t2153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::set_Fallback(System.Text.DecoderFallback)
extern "C" void Decoder_set_Fallback_m13468 (Decoder_t2153 * __this, DecoderFallback_t2427 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.Decoder::get_FallbackBuffer()
extern "C" DecoderFallbackBuffer_t2426 * Decoder_get_FallbackBuffer_m13469 (Decoder_t2153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
