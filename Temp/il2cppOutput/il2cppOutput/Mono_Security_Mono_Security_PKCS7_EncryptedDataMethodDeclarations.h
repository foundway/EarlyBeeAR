#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t1876;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1875;
// System.Byte[]
struct ByteU5BU5D_t679;
// Mono.Security.ASN1
struct ASN1_t1671;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m9311 (EncryptedData_t1876 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m9312 (EncryptedData_t1876 * __this, ASN1_t1671 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t1875 * EncryptedData_get_EncryptionAlgorithm_m9313 (EncryptedData_t1876 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t679* EncryptedData_get_EncryptedContent_m9314 (EncryptedData_t1876 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
