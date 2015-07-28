#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t1808;
// System.IO.TextReader
struct TextReader_t2107;
// System.Text.Encoding
struct Encoding_t1058;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct  Console_t1807  : public Object_t
{
};
struct Console_t1807_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t1808 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t1808 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t2107 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t1058 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t1058 * ___outputEncoding_4;
};
