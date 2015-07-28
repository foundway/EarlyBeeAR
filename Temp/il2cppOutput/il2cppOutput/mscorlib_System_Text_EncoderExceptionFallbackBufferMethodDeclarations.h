#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.EncoderExceptionFallbackBuffer
struct EncoderExceptionFallbackBuffer_t2435;

// System.Void System.Text.EncoderExceptionFallbackBuffer::.ctor()
extern "C" void EncoderExceptionFallbackBuffer__ctor_m13503 (EncoderExceptionFallbackBuffer_t2435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.EncoderExceptionFallbackBuffer::get_Remaining()
extern "C" int32_t EncoderExceptionFallbackBuffer_get_Remaining_m13504 (EncoderExceptionFallbackBuffer_t2435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.EncoderExceptionFallbackBuffer::Fallback(System.Char,System.Int32)
extern "C" bool EncoderExceptionFallbackBuffer_Fallback_m13505 (EncoderExceptionFallbackBuffer_t2435 * __this, uint16_t ___charUnknown, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.EncoderExceptionFallbackBuffer::Fallback(System.Char,System.Char,System.Int32)
extern "C" bool EncoderExceptionFallbackBuffer_Fallback_m13506 (EncoderExceptionFallbackBuffer_t2435 * __this, uint16_t ___charUnknownHigh, uint16_t ___charUnknownLow, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.EncoderExceptionFallbackBuffer::GetNextChar()
extern "C" uint16_t EncoderExceptionFallbackBuffer_GetNextChar_m13507 (EncoderExceptionFallbackBuffer_t2435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
