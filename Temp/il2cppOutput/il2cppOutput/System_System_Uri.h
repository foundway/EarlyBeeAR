﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t208;
// System.Uri/UriScheme[]
struct UriSchemeU5BU5D_t1773;
// System.UriParser
struct UriParser_t1770;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1042;
// System.Object
#include "mscorlib_System_Object.h"
// System.Uri
struct  Uri_t1138  : public Object_t
{
	// System.Boolean System.Uri::isUnixFilePath
	bool ___isUnixFilePath_1;
	// System.String System.Uri::source
	String_t* ___source_2;
	// System.String System.Uri::scheme
	String_t* ___scheme_3;
	// System.String System.Uri::host
	String_t* ___host_4;
	// System.Int32 System.Uri::port
	int32_t ___port_5;
	// System.String System.Uri::path
	String_t* ___path_6;
	// System.String System.Uri::query
	String_t* ___query_7;
	// System.String System.Uri::fragment
	String_t* ___fragment_8;
	// System.String System.Uri::userinfo
	String_t* ___userinfo_9;
	// System.Boolean System.Uri::isUnc
	bool ___isUnc_10;
	// System.Boolean System.Uri::isOpaquePart
	bool ___isOpaquePart_11;
	// System.Boolean System.Uri::isAbsoluteUri
	bool ___isAbsoluteUri_12;
	// System.String[] System.Uri::segments
	StringU5BU5D_t208* ___segments_13;
	// System.Boolean System.Uri::userEscaped
	bool ___userEscaped_14;
	// System.String System.Uri::cachedAbsoluteUri
	String_t* ___cachedAbsoluteUri_15;
	// System.String System.Uri::cachedToString
	String_t* ___cachedToString_16;
	// System.String System.Uri::cachedLocalPath
	String_t* ___cachedLocalPath_17;
	// System.Int32 System.Uri::cachedHashCode
	int32_t ___cachedHashCode_18;
	// System.UriParser System.Uri::parser
	UriParser_t1770 * ___parser_32;
};
struct Uri_t1138_StaticFields{
	// System.String System.Uri::hexUpperChars
	String_t* ___hexUpperChars_19;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_20;
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_21;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_22;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_23;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_24;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_25;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_26;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_27;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_28;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_29;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_30;
	// System.Uri/UriScheme[] System.Uri::schemes
	UriSchemeU5BU5D_t1773* ___schemes_31;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map12
	Dictionary_2_t1042 * ___U3CU3Ef__switch$map12_33;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map13
	Dictionary_2_t1042 * ___U3CU3Ef__switch$map13_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map14
	Dictionary_2_t1042 * ___U3CU3Ef__switch$map14_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map15
	Dictionary_2_t1042 * ___U3CU3Ef__switch$map15_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map16
	Dictionary_2_t1042 * ___U3CU3Ef__switch$map16_37;
};
