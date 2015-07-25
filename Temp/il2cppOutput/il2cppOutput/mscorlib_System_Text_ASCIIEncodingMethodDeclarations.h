#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.ASCIIEncoding
struct ASCIIEncoding_t2424;
// System.Char[]
struct CharU5BU5D_t410;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t679;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t2425;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t2426;
// System.Text.Decoder
struct Decoder_t2153;

// System.Void System.Text.ASCIIEncoding::.ctor()
extern "C" void ASCIIEncoding__ctor_m13451 (ASCIIEncoding_t2424 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C" int32_t ASCIIEncoding_GetByteCount_m13452 (ASCIIEncoding_t2424 * __this, CharU5BU5D_t410* ___chars, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.String)
extern "C" int32_t ASCIIEncoding_GetByteCount_m13453 (ASCIIEncoding_t2424 * __this, String_t* ___chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t ASCIIEncoding_GetBytes_m13454 (ASCIIEncoding_t2424 * __this, CharU5BU5D_t410* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t679* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C" int32_t ASCIIEncoding_GetBytes_m13455 (ASCIIEncoding_t2424 * __this, CharU5BU5D_t410* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t679* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t2425 ** ___buffer, CharU5BU5D_t410** ___fallback_chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t ASCIIEncoding_GetBytes_m13456 (ASCIIEncoding_t2424 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t679* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C" int32_t ASCIIEncoding_GetBytes_m13457 (ASCIIEncoding_t2424 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t679* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t2425 ** ___buffer, CharU5BU5D_t410** ___fallback_chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ASCIIEncoding_GetCharCount_m13458 (ASCIIEncoding_t2424 * __this, ByteU5BU5D_t679* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t ASCIIEncoding_GetChars_m13459 (ASCIIEncoding_t2424 * __this, ByteU5BU5D_t679* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t410* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Text.DecoderFallbackBuffer&)
extern "C" int32_t ASCIIEncoding_GetChars_m13460 (ASCIIEncoding_t2424 * __this, ByteU5BU5D_t679* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t410* ___chars, int32_t ___charIndex, DecoderFallbackBuffer_t2426 ** ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxByteCount(System.Int32)
extern "C" int32_t ASCIIEncoding_GetMaxByteCount_m13461 (ASCIIEncoding_t2424 * __this, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxCharCount(System.Int32)
extern "C" int32_t ASCIIEncoding_GetMaxCharCount_m13462 (ASCIIEncoding_t2424 * __this, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.ASCIIEncoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* ASCIIEncoding_GetString_m13463 (ASCIIEncoding_t2424 * __this, ByteU5BU5D_t679* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C" int32_t ASCIIEncoding_GetBytes_m13464 (ASCIIEncoding_t2424 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char*,System.Int32)
extern "C" int32_t ASCIIEncoding_GetByteCount_m13465 (ASCIIEncoding_t2424 * __this, uint16_t* ___chars, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.ASCIIEncoding::GetDecoder()
extern "C" Decoder_t2153 * ASCIIEncoding_GetDecoder_m13466 (ASCIIEncoding_t2424 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
