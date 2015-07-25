#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.TripleDESCryptoServiceProvider
struct TripleDESCryptoServiceProvider_t2410;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1880;
// System.Byte[]
struct ByteU5BU5D_t679;

// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::.ctor()
extern "C" void TripleDESCryptoServiceProvider__ctor_m13380 (TripleDESCryptoServiceProvider_t2410 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::GenerateIV()
extern "C" void TripleDESCryptoServiceProvider_GenerateIV_m13381 (TripleDESCryptoServiceProvider_t2410 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::GenerateKey()
extern "C" void TripleDESCryptoServiceProvider_GenerateKey_m13382 (TripleDESCryptoServiceProvider_t2410 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.TripleDESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * TripleDESCryptoServiceProvider_CreateDecryptor_m13383 (TripleDESCryptoServiceProvider_t2410 * __this, ByteU5BU5D_t679* ___rgbKey, ByteU5BU5D_t679* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.TripleDESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * TripleDESCryptoServiceProvider_CreateEncryptor_m13384 (TripleDESCryptoServiceProvider_t2410 * __this, ByteU5BU5D_t679* ___rgbKey, ByteU5BU5D_t679* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
