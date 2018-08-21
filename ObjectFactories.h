// Object compositions should be added here.
// These objects compositions will define the collection of components that make up each object.
class ObjectFactory
{
	GameObject* spawnBreakableBrick(Level* level, Sprite* sprite, int x, int y);
	GameObject* spawnFlyingBrick(Level* level, Sprite* sprite, int x, int y); // Broken block that flies through air
	GameObject* spawnPolarBear(Level* level, int x, int y);
	GameObject* spawnYeti(Level* level, int x, int y);
	GameObject* spawnPlayer(Level* level, Sprite* sprite, int x, int y);
	GameObject* spawnUnbreakableBrick(Level* level, Sprite* sprite, int x, int y);
	GameObject* spawnSprite(Level*, Sprite* sprite, int x, int y, int zindex);
	GameObject* spawnEnemySpawnPoint(Level* level, int x, int y);
	GameObject* spawnPterodactyl(Level* level, int x, int y);
}
