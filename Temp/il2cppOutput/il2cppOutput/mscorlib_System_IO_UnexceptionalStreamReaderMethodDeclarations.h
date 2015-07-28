#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.UnexceptionalStreamReader
struct UnexceptionalStreamReader_t2184;
// System.IO.Stream
struct Stream_t1924;
// System.Text.Encoding
struct Encoding_t1058;
// System.Char[]
struct CharU5BU5D_t410;
// System.String
struct String_t;

// System.Void System.IO.UnexceptionalStreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void UnexceptionalStreamReader__ctor_m12141 (UnexceptionalStreamReader_t2184 * __this, Stream_t1924 * ___stream, Encoding_t1058 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamReader::.cctor()
extern "C" void UnexceptionalStreamReader__cctor_m12142 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnexceptionalStreamReader::Peek()
extern "C" int32_t UnexceptionalStreamReader_Peek_m12143 (UnexceptionalStreamReader_t2184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnexceptionalStreamReader::Read()
extern "C" int32_t UnexceptionalStreamReader_Read_m12144 (UnexceptionalStreamReader_t2184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnexceptionalStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t UnexceptionalStreamReader_Read_m12145 (UnexceptionalStreamReader_t2184 * __this, CharU5BU5D_t410* ___dest_buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.UnexceptionalStreamReader::CheckEOL(System.Char)
extern "C" bool UnexceptionalStreamReader_CheckEOL_m12146 (UnexceptionalStreamReader_t2184 * __this, uint16_t ___current, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.UnexceptionalStreamReader::ReadLine()
extern "C" String_t* UnexceptionalStreamReader_ReadLine_m12147 (UnexceptionalStreamReader_t2184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.UnexceptionalStreamReader::ReadToEnd()
extern "C" String_t* UnexceptionalStreamReader_ReadToEnd_m12148 (UnexceptionalStreamReader_t2184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
