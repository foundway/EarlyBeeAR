#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t2090;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t2098;
// System.Byte[]
struct ByteU5BU5D_t679;
// Mono.Security.ASN1
struct ASN1_t2085;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m11414 (EncryptedData_t2090 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m11415 (EncryptedData_t2090 * __this, ASN1_t2085 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t2098 * EncryptedData_get_EncryptionAlgorithm_m11416 (EncryptedData_t2090 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t679* EncryptedData_get_EncryptedContent_m11417 (EncryptedData_t2090 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
