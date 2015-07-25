#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t2187;
// System.String
struct String_t;
// System.Reflection.Module[]
struct ModuleU5BU5D_t2188;
// System.Exception
struct Exception_t180;
// System.Reflection.AssemblyName
struct AssemblyName_t2189;

// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C" String_t* AssemblyBuilder_get_Location_m12155 (AssemblyBuilder_t2187 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C" ModuleU5BU5D_t2188* AssemblyBuilder_GetModulesInternal_m12156 (AssemblyBuilder_t2187 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C" bool AssemblyBuilder_get_IsCompilerContext_m12157 (AssemblyBuilder_t2187 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C" Exception_t180 * AssemblyBuilder_not_supported_m12158 (AssemblyBuilder_t2187 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C" AssemblyName_t2189 * AssemblyBuilder_UnprotectedGetName_m12159 (AssemblyBuilder_t2187 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
