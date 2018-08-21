class Level
{
public:
	static const int gridWidth;
	static const int gridHeight;

	template<typename ... Components>
	GameObjectIter getGameObjectsWithComponents<Components>();

private:
	GameObject[MaxGameObjects] gameObjects;

	void serializeToFile(std::string path);
	static Level loadFromFile(std::string path);
}