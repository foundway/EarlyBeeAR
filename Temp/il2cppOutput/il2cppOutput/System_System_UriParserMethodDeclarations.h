#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UriParser
struct UriParser_t1770;
// System.String
struct String_t;
// System.Uri
struct Uri_t1138;
// System.UriFormatException
struct UriFormatException_t1774;
// System.Collections.Hashtable
struct Hashtable_t1603;

// System.Void System.UriParser::.ctor()
extern "C" void UriParser__ctor_m8781 (UriParser_t1770 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::.cctor()
extern "C" void UriParser__cctor_m8782 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&)
extern "C" void UriParser_InitializeAndValidate_m8783 (UriParser_t1770 * __this, Uri_t1138 * ___uri, UriFormatException_t1774 ** ___parsingError, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::OnRegister(System.String,System.Int32)
extern "C" void UriParser_OnRegister_m8784 (UriParser_t1770 * __this, String_t* ___schemeName, int32_t ___defaultPort, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::set_SchemeName(System.String)
extern "C" void UriParser_set_SchemeName_m8785 (UriParser_t1770 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UriParser::get_DefaultPort()
extern "C" int32_t UriParser_get_DefaultPort_m8786 (UriParser_t1770 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::set_DefaultPort(System.Int32)
extern "C" void UriParser_set_DefaultPort_m8787 (UriParser_t1770 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::CreateDefaults()
extern "C" void UriParser_CreateDefaults_m8788 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::InternalRegister(System.Collections.Hashtable,System.UriParser,System.String,System.Int32)
extern "C" void UriParser_InternalRegister_m8789 (Object_t * __this /* static, unused */, Hashtable_t1603 * ___table, UriParser_t1770 * ___uriParser, String_t* ___schemeName, int32_t ___defaultPort, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriParser System.UriParser::GetParser(System.String)
extern "C" UriParser_t1770 * UriParser_GetParser_m8790 (Object_t * __this /* static, unused */, String_t* ___schemeName, MethodInfo* method) IL2CPP_METHOD_ATTR;
