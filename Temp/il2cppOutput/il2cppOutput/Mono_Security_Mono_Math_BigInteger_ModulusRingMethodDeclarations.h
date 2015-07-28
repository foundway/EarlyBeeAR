#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1863;
// Mono.Math.BigInteger
struct BigInteger_t1862;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m9218 (ModulusRing_t1863 * __this, BigInteger_t1862 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m9219 (ModulusRing_t1863 * __this, BigInteger_t1862 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1862 * ModulusRing_Multiply_m9220 (ModulusRing_t1863 * __this, BigInteger_t1862 * ___a, BigInteger_t1862 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1862 * ModulusRing_Difference_m9221 (ModulusRing_t1863 * __this, BigInteger_t1862 * ___a, BigInteger_t1862 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1862 * ModulusRing_Pow_m9222 (ModulusRing_t1863 * __this, BigInteger_t1862 * ___a, BigInteger_t1862 * ___k, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1862 * ModulusRing_Pow_m9223 (ModulusRing_t1863 * __this, uint32_t ___b, BigInteger_t1862 * ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
