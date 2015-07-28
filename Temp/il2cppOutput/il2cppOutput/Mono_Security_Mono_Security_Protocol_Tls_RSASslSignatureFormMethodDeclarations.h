#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RSASslSignatureFormatter
struct RSASslSignatureFormatter_t1945;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1656;
// System.Byte[]
struct ByteU5BU5D_t679;
// System.String
struct String_t;

// System.Void Mono.Security.Protocol.Tls.RSASslSignatureFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSASslSignatureFormatter__ctor_m9750 (RSASslSignatureFormatter_t1945 * __this, AsymmetricAlgorithm_t1656 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RSASslSignatureFormatter::CreateSignature(System.Byte[])
extern "C" ByteU5BU5D_t679* RSASslSignatureFormatter_CreateSignature_m9751 (RSASslSignatureFormatter_t1945 * __this, ByteU5BU5D_t679* ___rgbHash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureFormatter::SetHashAlgorithm(System.String)
extern "C" void RSASslSignatureFormatter_SetHashAlgorithm_m9752 (RSASslSignatureFormatter_t1945 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSASslSignatureFormatter_SetKey_m9753 (RSASslSignatureFormatter_t1945 * __this, AsymmetricAlgorithm_t1656 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
