#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MazeGenerator
struct MazeGenerator_t33;
// System.Int32[]
struct Int32U5BU5D_t34;
// MazeCoord
#include "AssemblyU2DCSharp_MazeCoord.h"

// System.Void MazeGenerator::.ctor()
extern "C" void MazeGenerator__ctor_m78 (MazeGenerator_t33 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MazeGenerator::Start()
extern "C" void MazeGenerator_Start_m79 (MazeGenerator_t33 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MazeGenerator::GenerateMaze()
extern "C" void MazeGenerator_GenerateMaze_m80 (MazeGenerator_t33 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] MazeGenerator::GetRandomDirections()
extern "C" Int32U5BU5D_t34* MazeGenerator_GetRandomDirections_m81 (MazeGenerator_t33 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MazeGenerator::TryCarve(MazeCoord&,System.Int32)
extern "C" bool MazeGenerator_TryCarve_m82 (MazeGenerator_t33 * __this, MazeCoord_t28 * ___coord, int32_t ___direction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MazeGenerator::DoCarve(MazeCoord)
extern "C" void MazeGenerator_DoCarve_m83 (MazeGenerator_t33 * __this, MazeCoord_t28  ___coord, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MazeGenerator::<GetRandomDirections>m__0(System.Int32)
extern "C" float MazeGenerator_U3CGetRandomDirectionsU3Em__0_m84 (Object_t * __this /* static, unused */, int32_t ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
