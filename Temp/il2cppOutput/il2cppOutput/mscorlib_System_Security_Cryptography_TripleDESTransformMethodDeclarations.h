#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.TripleDESTransform
struct TripleDESTransform_t2411;
// System.Security.Cryptography.TripleDES
struct TripleDES_t1997;
// System.Byte[]
struct ByteU5BU5D_t679;

// System.Void System.Security.Cryptography.TripleDESTransform::.ctor(System.Security.Cryptography.TripleDES,System.Boolean,System.Byte[],System.Byte[])
extern "C" void TripleDESTransform__ctor_m13385 (TripleDESTransform_t2411 * __this, TripleDES_t1997 * ___algo, bool ___encryption, ByteU5BU5D_t679* ___key, ByteU5BU5D_t679* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESTransform::ECB(System.Byte[],System.Byte[])
extern "C" void TripleDESTransform_ECB_m13386 (TripleDESTransform_t2411 * __this, ByteU5BU5D_t679* ___input, ByteU5BU5D_t679* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.TripleDESTransform::GetStrongKey()
extern "C" ByteU5BU5D_t679* TripleDESTransform_GetStrongKey_m13387 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
