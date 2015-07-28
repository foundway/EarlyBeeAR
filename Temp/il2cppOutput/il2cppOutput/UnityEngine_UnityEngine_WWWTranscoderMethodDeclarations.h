﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WWWTranscoder
struct WWWTranscoder_t1061;
// System.Byte[]
struct ByteU5BU5D_t679;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t1058;

// System.Void UnityEngine.WWWTranscoder::.cctor()
extern "C" void WWWTranscoder__cctor_m6486 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWTranscoder::Byte2Hex(System.Byte,System.Byte[])
extern "C" ByteU5BU5D_t679* WWWTranscoder_Byte2Hex_m6487 (Object_t * __this /* static, unused */, uint8_t ___b, ByteU5BU5D_t679* ___hexChars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWTranscoder::URLEncode(System.Byte[])
extern "C" ByteU5BU5D_t679* WWWTranscoder_URLEncode_m6488 (Object_t * __this /* static, unused */, ByteU5BU5D_t679* ___toEncode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWWTranscoder::QPEncode(System.String,System.Text.Encoding)
extern "C" String_t* WWWTranscoder_QPEncode_m6489 (Object_t * __this /* static, unused */, String_t* ___toEncode, Encoding_t1058 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWTranscoder::Encode(System.Byte[],System.Byte,System.Byte,System.Byte[],System.Boolean)
extern "C" ByteU5BU5D_t679* WWWTranscoder_Encode_m6490 (Object_t * __this /* static, unused */, ByteU5BU5D_t679* ___input, uint8_t ___escapeChar, uint8_t ___space, ByteU5BU5D_t679* ___forbidden, bool ___uppercase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWWTranscoder::ByteArrayContains(System.Byte[],System.Byte)
extern "C" bool WWWTranscoder_ByteArrayContains_m6491 (Object_t * __this /* static, unused */, ByteU5BU5D_t679* ___array, uint8_t ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.String,System.Text.Encoding)
extern "C" bool WWWTranscoder_SevenBitClean_m6492 (Object_t * __this /* static, unused */, String_t* ___s, Encoding_t1058 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.Byte[])
extern "C" bool WWWTranscoder_SevenBitClean_m6493 (Object_t * __this /* static, unused */, ByteU5BU5D_t679* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;