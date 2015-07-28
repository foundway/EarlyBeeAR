﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.ReplacementEvaluator
struct ReplacementEvaluator_t1753;
// System.Text.RegularExpressions.Regex
struct Regex_t213;
// System.String
struct String_t;
// System.Text.RegularExpressions.Match
struct Match_t1704;
// System.Text.StringBuilder
struct StringBuilder_t493;

// System.Void System.Text.RegularExpressions.ReplacementEvaluator::.ctor(System.Text.RegularExpressions.Regex,System.String)
extern "C" void ReplacementEvaluator__ctor_m8608 (ReplacementEvaluator_t1753 * __this, Regex_t213 * ___regex, String_t* ___replacement, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.ReplacementEvaluator::Evaluate(System.Text.RegularExpressions.Match)
extern "C" String_t* ReplacementEvaluator_Evaluate_m8609 (ReplacementEvaluator_t1753 * __this, Match_t1704 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::EvaluateAppend(System.Text.RegularExpressions.Match,System.Text.StringBuilder)
extern "C" void ReplacementEvaluator_EvaluateAppend_m8610 (ReplacementEvaluator_t1753 * __this, Match_t1704 * ___match, StringBuilder_t493 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.ReplacementEvaluator::get_NeedsGroupsOrCaptures()
extern "C" bool ReplacementEvaluator_get_NeedsGroupsOrCaptures_m8611 (ReplacementEvaluator_t1753 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::Ensure(System.Int32)
extern "C" void ReplacementEvaluator_Ensure_m8612 (ReplacementEvaluator_t1753 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::AddFromReplacement(System.Int32,System.Int32)
extern "C" void ReplacementEvaluator_AddFromReplacement_m8613 (ReplacementEvaluator_t1753 * __this, int32_t ___start, int32_t ___end, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::AddInt(System.Int32)
extern "C" void ReplacementEvaluator_AddInt_m8614 (ReplacementEvaluator_t1753 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::Compile()
extern "C" void ReplacementEvaluator_Compile_m8615 (ReplacementEvaluator_t1753 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.ReplacementEvaluator::CompileTerm(System.Int32&)
extern "C" int32_t ReplacementEvaluator_CompileTerm_m8616 (ReplacementEvaluator_t1753 * __this, int32_t* ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;