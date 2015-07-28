using UnityEngine;
using System.Collections.Generic;
using System.Linq;

[System.Serializable]
public struct MazeCoord {
	public int x;
	public int z;
	public MazeCoord(int x, int z) {
		this.x = x;
		this.z = z;
	}
}

struct MazeCell {
	public bool wall;
	public int carveCount;
	public int distanceFromStart;
}

public class MazeGenerator : MonoBehaviour {

	public float TileSize;
	public MazeCoord SizeInTiles;
	public GameObject WallPrefab;
	public GameObject Ending;

	private MazeCell[,] cells;
	private List<GameObject> mazeWalls;

	public void Start() {
		cells = new MazeCell[SizeInTiles.x, SizeInTiles.z];
		mazeWalls = new List<GameObject> ();
		GenerateMaze ();
	}

	public void GenerateMaze() {
		// Clear the cell data
		for (int x = 0; x < SizeInTiles.x; ++x) {
			for (int z = 0; z < SizeInTiles.z; ++z) {
				cells[x,z].wall = true;
				cells[x,z].distanceFromStart = 0;
				if (x == 0 || z == 0 || x == SizeInTiles.x - 1 || z == SizeInTiles.z - 1) {
					cells[x,z].carveCount = 5; // Prevent carving of edge cells
				} else {
					cells[x,z].carveCount = 0;
				}
			}
		}
		// Destroy all walls if the maze had been generated previously
		foreach (GameObject wall in mazeWalls) {
			Destroy(wall);
		}
		mazeWalls.Clear ();
		// Algorithm start
		MazeCoord start = new MazeCoord (1, 1);
		List<MazeCoord> activeCells = new List<MazeCoord>();
		activeCells.Add (start);
		DoCarve (start);
		while (activeCells.Count > 0) {
			MazeCoord genCoord = activeCells[activeCells.Count - 1];
			bool couldCarve = false;
			int[] directions = GetRandomDirections();
			foreach (int dir in directions) {
				MazeCoord nextCoord = genCoord;
				if (TryCarve(ref nextCoord, dir)) {
					activeCells.Add(nextCoord);
					couldCarve = true;
					break;
				}
			}
			if (!couldCarve) {
				activeCells.Remove(genCoord);
			}
		}
		// The maze data is all set up, now spawn wall objects
		MazeCoord exitCoord = new MazeCoord();
		int highestDistance = 0;
		for (int x = 0; x < SizeInTiles.x; ++x) {
			for (int z = 0; z < SizeInTiles.z; ++z) {
				if (cells[x,z].wall) {
					GameObject wallPart = Instantiate(WallPrefab);
					wallPart.name = "Maze Wall " + x + "," + z;
					wallPart.transform.parent = transform;
					wallPart.transform.localPosition = new Vector3(x * TileSize, 0, z * TileSize);
					mazeWalls.Add(wallPart);
				}
				else {
					if (cells[x,z].distanceFromStart > highestDistance) {
						highestDistance = cells[x,z].distanceFromStart;
						exitCoord = new MazeCoord(x, z);
					}
				}
			}
		}
		// Place the exit teleport at the exit
		Ending.transform.position = transform.position + new Vector3(exitCoord.x * TileSize, 0, exitCoord.z * TileSize);
	}

	private int[] GetRandomDirections() {
		int[] directions = { 0, 1, 2, 3 };
		return directions.OrderBy (x => Random.value).ToArray();
	}

	private bool TryCarve(ref MazeCoord coord, int direction) {
		int distanceFromStart = cells [coord.x, coord.z].distanceFromStart;
		switch (direction) {
		case 0:
			coord.x += 1;
			break;
		case 1:
			coord.x -= 1;
			break;
		case 2:
			coord.z += 1;
			break;
		case 3:
			coord.z -= 1;
			break;
		default:
			return false;
		}
		if (!cells [coord.x, coord.z].wall || cells [coord.x, coord.z].carveCount >= 2) {
			// Cannot carve this cell
			return false;
		}
		cells [coord.x, coord.z].distanceFromStart = distanceFromStart + 1;
		DoCarve (coord);
		return true;
	}

	private void DoCarve(MazeCoord coord) {
		cells [coord.x, coord.z].wall = false;
		// No out of bounds checks needed, since edge tile already can't be carved
		++cells [coord.x - 1, coord.z].carveCount;
		++cells [coord.x + 1, coord.z].carveCount;
		++cells [coord.x, coord.z - 1].carveCount;
		++cells [coord.x, coord.z + 1].carveCount;
	}

}
