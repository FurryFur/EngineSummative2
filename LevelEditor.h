class
{
	Level* level;
	EGameObjectType selectedTile;

	// Place tile at the specified location in the level.
	// Tiles will be automatically snapped to grid.
	placeTileAtLocation(int x, int y);
	void save(std::string path);
}