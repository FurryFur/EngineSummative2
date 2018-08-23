class Level
{
public:
	static const int gridWidth;
	static const int gridHeight;

	// Returns an iterator over all game objects
	GameObjectIter getGameObjects();

	// Returns an iterator over the game objects with the specified components
	template<typename... Components>
	GameObjectIter getGameObjectsWithComponents();

	// Add a system, of type T, to be executed on game objects in the level.
	// Systems are executed in the order added.
	template<typename T>
	void AddSystem(T system);

	void TickAllSystems();

private:
	GameObject[MaxGameObjects] gameObjects;
	std::vector<System> systems;

	void serializeToFile(std::string path);
	static Level loadFromFile(std::string path);
}