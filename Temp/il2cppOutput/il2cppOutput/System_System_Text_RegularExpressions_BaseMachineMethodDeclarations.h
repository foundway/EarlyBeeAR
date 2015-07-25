#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.BaseMachine
struct BaseMachine_t1706;
// System.String
struct String_t;
// System.Text.RegularExpressions.Regex
struct Regex_t213;
// System.String[]
struct StringU5BU5D_t208;
// System.Text.RegularExpressions.Match
struct Match_t1704;
// System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator
struct MatchAppendEvaluator_t1705;
// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_t1707;

// System.Void System.Text.RegularExpressions.BaseMachine::.ctor()
extern "C" void BaseMachine__ctor_m8341 (BaseMachine_t1706 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::Replace(System.Text.RegularExpressions.Regex,System.String,System.String,System.Int32,System.Int32)
extern "C" String_t* BaseMachine_Replace_m8342 (BaseMachine_t1706 * __this, Regex_t213 * ___regex, String_t* ___input, String_t* ___replacement, int32_t ___count, int32_t ___startat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.BaseMachine::Split(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern "C" StringU5BU5D_t208* BaseMachine_Split_m8343 (BaseMachine_t1706 * __this, Regex_t213 * ___regex, String_t* ___input, int32_t ___count, int32_t ___startat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.BaseMachine::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern "C" Match_t1704 * BaseMachine_Scan_m8344 (BaseMachine_t1706 * __this, Regex_t213 * ___regex, String_t* ___text, int32_t ___start, int32_t ___end, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::LTRReplace(System.Text.RegularExpressions.Regex,System.String,System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator,System.Int32,System.Int32,System.Boolean)
extern "C" String_t* BaseMachine_LTRReplace_m8345 (BaseMachine_t1706 * __this, Regex_t213 * ___regex, String_t* ___input, MatchAppendEvaluator_t1705 * ___evaluator, int32_t ___count, int32_t ___startat, bool ___needs_groups_or_captures, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::RTLReplace(System.Text.RegularExpressions.Regex,System.String,System.Text.RegularExpressions.MatchEvaluator,System.Int32,System.Int32)
extern "C" String_t* BaseMachine_RTLReplace_m8346 (BaseMachine_t1706 * __this, Regex_t213 * ___regex, String_t* ___input, MatchEvaluator_t1707 * ___evaluator, int32_t ___count, int32_t ___startat, MethodInfo* method) IL2CPP_METHOD_ATTR;
