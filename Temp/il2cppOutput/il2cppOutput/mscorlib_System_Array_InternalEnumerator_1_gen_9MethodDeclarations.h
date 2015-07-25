#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<MazeCell>
struct InternalEnumerator_1_t3076;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// MazeCell
#include "AssemblyU2DCSharp_MazeCell.h"

// System.Void System.Array/InternalEnumerator`1<MazeCell>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m15443_gshared (InternalEnumerator_1_t3076 * __this, Array_t * ___array, MethodInfo* method);
#define InternalEnumerator_1__ctor_m15443(__this, ___array, method) (( void (*) (InternalEnumerator_1_t3076 *, Array_t *, MethodInfo*))InternalEnumerator_1__ctor_m15443_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<MazeCell>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15444_gshared (InternalEnumerator_1_t3076 * __this, MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15444(__this, method) (( Object_t * (*) (InternalEnumerator_1_t3076 *, MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15444_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<MazeCell>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15445_gshared (InternalEnumerator_1_t3076 * __this, MethodInfo* method);
#define InternalEnumerator_1_Dispose_m15445(__this, method) (( void (*) (InternalEnumerator_1_t3076 *, MethodInfo*))InternalEnumerator_1_Dispose_m15445_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<MazeCell>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m15446_gshared (InternalEnumerator_1_t3076 * __this, MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m15446(__this, method) (( bool (*) (InternalEnumerator_1_t3076 *, MethodInfo*))InternalEnumerator_1_MoveNext_m15446_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<MazeCell>::get_Current()
extern "C" MazeCell_t29  InternalEnumerator_1_get_Current_m15447_gshared (InternalEnumerator_1_t3076 * __this, MethodInfo* method);
#define InternalEnumerator_1_get_Current_m15447(__this, method) (( MazeCell_t29  (*) (InternalEnumerator_1_t3076 *, MethodInfo*))InternalEnumerator_1_get_Current_m15447_gshared)(__this, method)
