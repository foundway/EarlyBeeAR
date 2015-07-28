﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t1887;
// System.Byte[]
struct ByteU5BU5D_t679;
// System.Security.Cryptography.RSA
struct RSA_t1662;
// System.Security.Cryptography.DSA
struct DSA_t1661;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
extern "C" void PrivateKeyInfo__ctor_m9352 (PrivateKeyInfo_t1887 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
extern "C" void PrivateKeyInfo__ctor_m9353 (PrivateKeyInfo_t1887 * __this, ByteU5BU5D_t679* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
extern "C" ByteU5BU5D_t679* PrivateKeyInfo_get_PrivateKey_m9354 (PrivateKeyInfo_t1887 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
extern "C" void PrivateKeyInfo_Decode_m9355 (PrivateKeyInfo_t1887 * __this, ByteU5BU5D_t679* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
extern "C" ByteU5BU5D_t679* PrivateKeyInfo_RemoveLeadingZero_m9356 (Object_t * __this /* static, unused */, ByteU5BU5D_t679* ___bigInt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t679* PrivateKeyInfo_Normalize_m9357 (Object_t * __this /* static, unused */, ByteU5BU5D_t679* ___bigInt, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
extern "C" RSA_t1662 * PrivateKeyInfo_DecodeRSA_m9358 (Object_t * __this /* static, unused */, ByteU5BU5D_t679* ___keypair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
extern "C" DSA_t1661 * PrivateKeyInfo_DecodeDSA_m9359 (Object_t * __this /* static, unused */, ByteU5BU5D_t679* ___privateKey, DSAParameters_t1794  ___dsaParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;