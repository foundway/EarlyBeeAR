#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t2077;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1891;
// System.Byte[]
struct ByteU5BU5D_t679;

// System.Void Mono.Security.Cryptography.MACAlgorithm::.ctor(System.Security.Cryptography.SymmetricAlgorithm)
extern "C" void MACAlgorithm__ctor_m11238 (MACAlgorithm_t2077 * __this, SymmetricAlgorithm_t1891 * ___algorithm, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Initialize(System.Byte[])
extern "C" void MACAlgorithm_Initialize_m11239 (MACAlgorithm_t2077 * __this, ByteU5BU5D_t679* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Core(System.Byte[],System.Int32,System.Int32)
extern "C" void MACAlgorithm_Core_m11240 (MACAlgorithm_t2077 * __this, ByteU5BU5D_t679* ___rgb, int32_t ___ib, int32_t ___cb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MACAlgorithm::Final()
extern "C" ByteU5BU5D_t679* MACAlgorithm_Final_m11241 (MACAlgorithm_t2077 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
