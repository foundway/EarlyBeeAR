﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.KeyBuilder
struct KeyBuilder_t1882;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1867;
// System.Byte[]
struct ByteU5BU5D_t679;

// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::get_Rng()
extern "C" RandomNumberGenerator_t1867 * KeyBuilder_get_Rng_m9330 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.KeyBuilder::Key(System.Int32)
extern "C" ByteU5BU5D_t679* KeyBuilder_Key_m9331 (Object_t * __this /* static, unused */, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
