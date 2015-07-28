#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t2083;
// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t2082;
// System.Byte[]
struct ByteU5BU5D_t679;
// System.String
struct String_t;
// Mono.Math.BigInteger
struct BigInteger_t2063;
// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"

// System.Void Mono.Security.Cryptography.RSAManaged::.ctor(System.Int32)
extern "C" void RSAManaged__ctor_m11273 (RSAManaged_t2083 * __this, int32_t ___keySize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::add_KeyGenerated(Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler)
extern "C" void RSAManaged_add_KeyGenerated_m11274 (RSAManaged_t2083 * __this, KeyGeneratedEventHandler_t2082 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::remove_KeyGenerated(Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler)
extern "C" void RSAManaged_remove_KeyGenerated_m11275 (RSAManaged_t2083 * __this, KeyGeneratedEventHandler_t2082 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::Finalize()
extern "C" void RSAManaged_Finalize_m11276 (RSAManaged_t2083 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::GenerateKeyPair()
extern "C" void RSAManaged_GenerateKeyPair_m11277 (RSAManaged_t2083 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.RSAManaged::get_KeySize()
extern "C" int32_t RSAManaged_get_KeySize_m11278 (RSAManaged_t2083 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.RSAManaged::get_PublicOnly()
extern "C" bool RSAManaged_get_PublicOnly_m11279 (RSAManaged_t2083 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::DecryptValue(System.Byte[])
extern "C" ByteU5BU5D_t679* RSAManaged_DecryptValue_m11280 (RSAManaged_t2083 * __this, ByteU5BU5D_t679* ___rgb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::EncryptValue(System.Byte[])
extern "C" ByteU5BU5D_t679* RSAManaged_EncryptValue_m11281 (RSAManaged_t2083 * __this, ByteU5BU5D_t679* ___rgb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters Mono.Security.Cryptography.RSAManaged::ExportParameters(System.Boolean)
extern "C" RSAParameters_t1792  RSAManaged_ExportParameters_m11282 (RSAManaged_t2083 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::ImportParameters(System.Security.Cryptography.RSAParameters)
extern "C" void RSAManaged_ImportParameters_m11283 (RSAManaged_t2083 * __this, RSAParameters_t1792  ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::Dispose(System.Boolean)
extern "C" void RSAManaged_Dispose_m11284 (RSAManaged_t2083 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.RSAManaged::ToXmlString(System.Boolean)
extern "C" String_t* RSAManaged_ToXmlString_m11285 (RSAManaged_t2083 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.RSAManaged::get_IsCrtPossible()
extern "C" bool RSAManaged_get_IsCrtPossible_m11286 (RSAManaged_t2083 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::GetPaddedValue(Mono.Math.BigInteger,System.Int32)
extern "C" ByteU5BU5D_t679* RSAManaged_GetPaddedValue_m11287 (RSAManaged_t2083 * __this, BigInteger_t2063 * ___value, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
