﻿#pragma once
#include <stdint.h>
// System.Byte[]
struct ByteU5BU5D_t679;
// System.Char[]
struct CharU5BU5D_t410;
// System.Text.Encoding
struct Encoding_t1058;
// System.Text.Decoder
struct Decoder_t2153;
// System.IO.Stream
struct Stream_t1924;
// System.Text.StringBuilder
struct StringBuilder_t493;
// System.IO.StreamReader
struct StreamReader_t2161;
// System.IO.TextReader
#include "mscorlib_System_IO_TextReader.h"
// System.IO.StreamReader
struct  StreamReader_t2161  : public TextReader_t2107
{
	// System.Byte[] System.IO.StreamReader::input_buffer
	ByteU5BU5D_t679* ___input_buffer_1;
	// System.Char[] System.IO.StreamReader::decoded_buffer
	CharU5BU5D_t410* ___decoded_buffer_2;
	// System.Int32 System.IO.StreamReader::decoded_count
	int32_t ___decoded_count_3;
	// System.Int32 System.IO.StreamReader::pos
	int32_t ___pos_4;
	// System.Int32 System.IO.StreamReader::buffer_size
	int32_t ___buffer_size_5;
	// System.Int32 System.IO.StreamReader::do_checks
	int32_t ___do_checks_6;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_t1058 * ___encoding_7;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_t2153 * ___decoder_8;
	// System.IO.Stream System.IO.StreamReader::base_stream
	Stream_t1924 * ___base_stream_9;
	// System.Boolean System.IO.StreamReader::mayBlock
	bool ___mayBlock_10;
	// System.Text.StringBuilder System.IO.StreamReader::line_builder
	StringBuilder_t493 * ___line_builder_11;
	// System.Boolean System.IO.StreamReader::foundCR
	bool ___foundCR_13;
};
struct StreamReader_t2161_StaticFields{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t2161 * ___Null_12;
};
