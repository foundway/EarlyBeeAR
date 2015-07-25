#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DESTransform
struct DESTransform_t2377;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1891;
// System.Byte[]
struct ByteU5BU5D_t679;
// System.UInt32[]
struct UInt32U5BU5D_t1866;

// System.Void System.Security.Cryptography.DESTransform::.ctor(System.Security.Cryptography.SymmetricAlgorithm,System.Boolean,System.Byte[],System.Byte[])
extern "C" void DESTransform__ctor_m13109 (DESTransform_t2377 * __this, SymmetricAlgorithm_t1891 * ___symmAlgo, bool ___encryption, ByteU5BU5D_t679* ___key, ByteU5BU5D_t679* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::.cctor()
extern "C" void DESTransform__cctor_m13110 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.DESTransform::CipherFunct(System.UInt32,System.Int32)
extern "C" uint32_t DESTransform_CipherFunct_m13111 (DESTransform_t2377 * __this, uint32_t ___r, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::Permutation(System.Byte[],System.Byte[],System.UInt32[],System.Boolean)
extern "C" void DESTransform_Permutation_m13112 (Object_t * __this /* static, unused */, ByteU5BU5D_t679* ___input, ByteU5BU5D_t679* ___output, UInt32U5BU5D_t1866* ___permTab, bool ___preSwap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::BSwap(System.Byte[])
extern "C" void DESTransform_BSwap_m13113 (Object_t * __this /* static, unused */, ByteU5BU5D_t679* ___byteBuff, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::SetKey(System.Byte[])
extern "C" void DESTransform_SetKey_m13114 (DESTransform_t2377 * __this, ByteU5BU5D_t679* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::ProcessBlock(System.Byte[],System.Byte[])
extern "C" void DESTransform_ProcessBlock_m13115 (DESTransform_t2377 * __this, ByteU5BU5D_t679* ___input, ByteU5BU5D_t679* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::ECB(System.Byte[],System.Byte[])
extern "C" void DESTransform_ECB_m13116 (DESTransform_t2377 * __this, ByteU5BU5D_t679* ___input, ByteU5BU5D_t679* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DESTransform::GetStrongKey()
extern "C" ByteU5BU5D_t679* DESTransform_GetStrongKey_m13117 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
