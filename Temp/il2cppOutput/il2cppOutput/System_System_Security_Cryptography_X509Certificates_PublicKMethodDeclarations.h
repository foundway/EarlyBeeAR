#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t1659;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1657;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1656;
// System.Security.Cryptography.Oid
struct Oid_t1658;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1660;
// System.Byte[]
struct ByteU5BU5D_t679;
// System.Security.Cryptography.DSA
struct DSA_t1661;
// System.Security.Cryptography.RSA
struct RSA_t1662;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m8115 (PublicKey_t1659 * __this, X509Certificate_t1660 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t1657 * PublicKey_get_EncodedKeyValue_m8116 (PublicKey_t1659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t1657 * PublicKey_get_EncodedParameters_m8117 (PublicKey_t1659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t1656 * PublicKey_get_Key_m8118 (PublicKey_t1659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t1658 * PublicKey_get_Oid_m8119 (PublicKey_t1659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t679* PublicKey_GetUnsignedBigInteger_m8120 (Object_t * __this /* static, unused */, ByteU5BU5D_t679* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t1661 * PublicKey_DecodeDSA_m8121 (Object_t * __this /* static, unused */, ByteU5BU5D_t679* ___rawPublicKey, ByteU5BU5D_t679* ___rawParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t1662 * PublicKey_DecodeRSA_m8122 (Object_t * __this /* static, unused */, ByteU5BU5D_t679* ___rawPublicKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
