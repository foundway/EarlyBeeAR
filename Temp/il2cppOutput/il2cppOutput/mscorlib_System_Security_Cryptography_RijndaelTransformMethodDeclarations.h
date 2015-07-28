#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t2394;
// System.Security.Cryptography.Rijndael
struct Rijndael_t1998;
// System.Byte[]
struct ByteU5BU5D_t679;
// System.UInt32[]
struct UInt32U5BU5D_t1866;

// System.Void System.Security.Cryptography.RijndaelTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
extern "C" void RijndaelTransform__ctor_m13279 (RijndaelTransform_t2394 * __this, Rijndael_t1998 * ___algo, bool ___encryption, ByteU5BU5D_t679* ___key, ByteU5BU5D_t679* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::.cctor()
extern "C" void RijndaelTransform__cctor_m13280 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Clear()
extern "C" void RijndaelTransform_Clear_m13281 (RijndaelTransform_t2394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::ECB(System.Byte[],System.Byte[])
extern "C" void RijndaelTransform_ECB_m13282 (RijndaelTransform_t2394 * __this, ByteU5BU5D_t679* ___input, ByteU5BU5D_t679* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RijndaelTransform::SubByte(System.UInt32)
extern "C" uint32_t RijndaelTransform_SubByte_m13283 (RijndaelTransform_t2394 * __this, uint32_t ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt128_m13284 (RijndaelTransform_t2394 * __this, ByteU5BU5D_t679* ___indata, ByteU5BU5D_t679* ___outdata, UInt32U5BU5D_t1866* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt192_m13285 (RijndaelTransform_t2394 * __this, ByteU5BU5D_t679* ___indata, ByteU5BU5D_t679* ___outdata, UInt32U5BU5D_t1866* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt256_m13286 (RijndaelTransform_t2394 * __this, ByteU5BU5D_t679* ___indata, ByteU5BU5D_t679* ___outdata, UInt32U5BU5D_t1866* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt128_m13287 (RijndaelTransform_t2394 * __this, ByteU5BU5D_t679* ___indata, ByteU5BU5D_t679* ___outdata, UInt32U5BU5D_t1866* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt192_m13288 (RijndaelTransform_t2394 * __this, ByteU5BU5D_t679* ___indata, ByteU5BU5D_t679* ___outdata, UInt32U5BU5D_t1866* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt256_m13289 (RijndaelTransform_t2394 * __this, ByteU5BU5D_t679* ___indata, ByteU5BU5D_t679* ___outdata, UInt32U5BU5D_t1866* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
