﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Stack/Enumerator
struct Enumerator_t2131;
// System.Object
struct Object_t;
// System.Collections.Stack
struct Stack_t1231;

// System.Void System.Collections.Stack/Enumerator::.ctor(System.Collections.Stack)
extern "C" void Enumerator__ctor_m11661 (Enumerator_t2131 * __this, Stack_t1231 * ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack/Enumerator::get_Current()
extern "C" Object_t * Enumerator_get_Current_m11662 (Enumerator_t2131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Stack/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m11663 (Enumerator_t2131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;