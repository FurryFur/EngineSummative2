class LevelEditor : public Level
{
	// Setup UIButtons
	LevelEditor();

	Level* level;
	EGameObjectType selectedTile;

	// Position for selected tile to be placed at on button press
	vec2 cursorPosition;

	// Place tile at the specified location in the level.
	// Tiles will be automatically snapped to grid.
	void placeTileAtLocation(int x, int y);
	void removeTileAtLocation(int x, int y);

	// Editor ticks editor systems and also ticks level using
	// the render system so no in game behaviors run.
	virtual void tickAllSystems() override;

	void save(std::string path);
	void load(std::string path);
}
