﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.PositionAssertion
struct PositionAssertion_t1765;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t1755;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t1756;
// System.Text.RegularExpressions.Position
#include "System_System_Text_RegularExpressions_Position.h"

// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::.ctor(System.Text.RegularExpressions.Position)
extern "C" void PositionAssertion__ctor_m8688 (PositionAssertion_t1765 * __this, uint16_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void PositionAssertion_Compile_m8689 (PositionAssertion_t1765 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::GetWidth(System.Int32&,System.Int32&)
extern "C" void PositionAssertion_GetWidth_m8690 (PositionAssertion_t1765 * __this, int32_t* ___min, int32_t* ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.PositionAssertion::IsComplex()
extern "C" bool PositionAssertion_IsComplex_m8691 (PositionAssertion_t1765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.PositionAssertion::GetAnchorInfo(System.Boolean)
extern "C" AnchorInfo_t1756 * PositionAssertion_GetAnchorInfo_m8692 (PositionAssertion_t1765 * __this, bool ___revers, MethodInfo* method) IL2CPP_METHOD_ATTR;