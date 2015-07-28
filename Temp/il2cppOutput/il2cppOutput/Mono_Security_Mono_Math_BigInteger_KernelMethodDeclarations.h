#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/Kernel
struct Kernel_t1864;
// Mono.Math.BigInteger
struct BigInteger_t1862;
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t1865;
// System.UInt32[]
struct UInt32U5BU5D_t1866;
// Mono.Math.BigInteger/Sign
#include "Mono_Security_Mono_Math_BigInteger_Sign.h"

// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::AddSameSign(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1862 * Kernel_AddSameSign_m9224 (Object_t * __this /* static, unused */, BigInteger_t1862 * ___bi1, BigInteger_t1862 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::Subtract(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1862 * Kernel_Subtract_m9225 (Object_t * __this /* static, unused */, BigInteger_t1862 * ___big, BigInteger_t1862 * ___small, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MinusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_MinusEq_m9226 (Object_t * __this /* static, unused */, BigInteger_t1862 * ___big, BigInteger_t1862 * ___small, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::PlusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_PlusEq_m9227 (Object_t * __this /* static, unused */, BigInteger_t1862 * ___bi1, BigInteger_t1862 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger/Sign Mono.Math.BigInteger/Kernel::Compare(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" int32_t Kernel_Compare_m9228 (Object_t * __this /* static, unused */, BigInteger_t1862 * ___bi1, BigInteger_t1862 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::SingleByteDivideInPlace(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_SingleByteDivideInPlace_m9229 (Object_t * __this /* static, unused */, BigInteger_t1862 * ___n, uint32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::DwordMod(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_DwordMod_m9230 (Object_t * __this /* static, unused */, BigInteger_t1862 * ___n, uint32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::DwordDivMod(Mono.Math.BigInteger,System.UInt32)
extern "C" BigIntegerU5BU5D_t1865* Kernel_DwordDivMod_m9231 (Object_t * __this /* static, unused */, BigInteger_t1862 * ___n, uint32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::multiByteDivide(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigIntegerU5BU5D_t1865* Kernel_multiByteDivide_m9232 (Object_t * __this /* static, unused */, BigInteger_t1862 * ___bi1, BigInteger_t1862 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::LeftShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t1862 * Kernel_LeftShift_m9233 (Object_t * __this /* static, unused */, BigInteger_t1862 * ___bi, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::RightShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t1862 * Kernel_RightShift_m9234 (Object_t * __this /* static, unused */, BigInteger_t1862 * ___bi, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
extern "C" void Kernel_Multiply_m9235 (Object_t * __this /* static, unused */, UInt32U5BU5D_t1866* ___x, uint32_t ___xOffset, uint32_t ___xLen, UInt32U5BU5D_t1866* ___y, uint32_t ___yOffset, uint32_t ___yLen, UInt32U5BU5D_t1866* ___d, uint32_t ___dOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
extern "C" void Kernel_MultiplyMod2p32pmod_m9236 (Object_t * __this /* static, unused */, UInt32U5BU5D_t1866* ___x, int32_t ___xOffset, int32_t ___xLen, UInt32U5BU5D_t1866* ___y, int32_t ___yOffest, int32_t ___yLen, UInt32U5BU5D_t1866* ___d, int32_t ___dOffset, int32_t ___mod, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_modInverse_m9237 (Object_t * __this /* static, unused */, BigInteger_t1862 * ___bi, uint32_t ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1862 * Kernel_modInverse_m9238 (Object_t * __this /* static, unused */, BigInteger_t1862 * ___bi, BigInteger_t1862 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
