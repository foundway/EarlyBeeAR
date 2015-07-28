#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.UnexceptionalStreamWriter
struct UnexceptionalStreamWriter_t2185;
// System.IO.Stream
struct Stream_t1924;
// System.Text.Encoding
struct Encoding_t1058;
// System.Char[]
struct CharU5BU5D_t410;
// System.String
struct String_t;

// System.Void System.IO.UnexceptionalStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void UnexceptionalStreamWriter__ctor_m12149 (UnexceptionalStreamWriter_t2185 * __this, Stream_t1924 * ___stream, Encoding_t1058 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Flush()
extern "C" void UnexceptionalStreamWriter_Flush_m12150 (UnexceptionalStreamWriter_t2185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void UnexceptionalStreamWriter_Write_m12151 (UnexceptionalStreamWriter_t2185 * __this, CharU5BU5D_t410* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char)
extern "C" void UnexceptionalStreamWriter_Write_m12152 (UnexceptionalStreamWriter_t2185 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[])
extern "C" void UnexceptionalStreamWriter_Write_m12153 (UnexceptionalStreamWriter_t2185 * __this, CharU5BU5D_t410* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.String)
extern "C" void UnexceptionalStreamWriter_Write_m12154 (UnexceptionalStreamWriter_t2185 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
