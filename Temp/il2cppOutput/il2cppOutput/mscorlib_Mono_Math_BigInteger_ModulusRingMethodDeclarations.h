﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t2068;
// Mono.Math.BigInteger
struct BigInteger_t2063;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m11101 (ModulusRing_t2068 * __this, BigInteger_t2063 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m11102 (ModulusRing_t2068 * __this, BigInteger_t2063 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2063 * ModulusRing_Multiply_m11103 (ModulusRing_t2068 * __this, BigInteger_t2063 * ___a, BigInteger_t2063 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2063 * ModulusRing_Difference_m11104 (ModulusRing_t2068 * __this, BigInteger_t2063 * ___a, BigInteger_t2063 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2063 * ModulusRing_Pow_m11105 (ModulusRing_t2068 * __this, BigInteger_t2063 * ___a, BigInteger_t2063 * ___k, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t2063 * ModulusRing_Pow_m11106 (ModulusRing_t2068 * __this, uint32_t ___b, BigInteger_t2063 * ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
