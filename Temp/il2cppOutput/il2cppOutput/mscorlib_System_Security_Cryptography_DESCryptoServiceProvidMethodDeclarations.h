﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DESCryptoServiceProvider
struct DESCryptoServiceProvider_t2378;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1880;
// System.Byte[]
struct ByteU5BU5D_t679;

// System.Void System.Security.Cryptography.DESCryptoServiceProvider::.ctor()
extern "C" void DESCryptoServiceProvider__ctor_m13118 (DESCryptoServiceProvider_t2378 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * DESCryptoServiceProvider_CreateDecryptor_m13119 (DESCryptoServiceProvider_t2378 * __this, ByteU5BU5D_t679* ___rgbKey, ByteU5BU5D_t679* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * DESCryptoServiceProvider_CreateEncryptor_m13120 (DESCryptoServiceProvider_t2378 * __this, ByteU5BU5D_t679* ___rgbKey, ByteU5BU5D_t679* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateIV()
extern "C" void DESCryptoServiceProvider_GenerateIV_m13121 (DESCryptoServiceProvider_t2378 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateKey()
extern "C" void DESCryptoServiceProvider_GenerateKey_m13122 (DESCryptoServiceProvider_t2378 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
