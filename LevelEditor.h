class
{
	Level* level;
	EGameObjectType selectedTile;

	// Place tile at the specified location in the level.
	// Tiles will be automatically snapped to grid.
	void placeTileAtLocation(int x, int y);
	void removeTileAtLocation(int x, int y);

	void save(std::string path);
	void load(std::string path);
}