#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t7;
// MazeCell[,]
struct MazeCellU5BU2CU5D_t30;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t31;
// System.Func`2<System.Int32,System.Single>
struct Func_2_t32;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MazeCoord
#include "AssemblyU2DCSharp_MazeCoord.h"
// MazeGenerator
struct  MazeGenerator_t33  : public MonoBehaviour_t4
{
	// System.Single MazeGenerator::TileSize
	float ___TileSize_2;
	// MazeCoord MazeGenerator::SizeInTiles
	MazeCoord_t28  ___SizeInTiles_3;
	// UnityEngine.GameObject MazeGenerator::WallPrefab
	GameObject_t7 * ___WallPrefab_4;
	// UnityEngine.GameObject MazeGenerator::Ending
	GameObject_t7 * ___Ending_5;
	// MazeCell[,] MazeGenerator::cells
	MazeCellU5BU2CU5D_t30* ___cells_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MazeGenerator::mazeWalls
	List_1_t31 * ___mazeWalls_7;
};
struct MazeGenerator_t33_StaticFields{
	// System.Func`2<System.Int32,System.Single> MazeGenerator::<>f__am$cache6
	Func_2_t32 * ___U3CU3Ef__am$cache6_8;
};
