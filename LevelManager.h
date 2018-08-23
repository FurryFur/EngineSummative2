class LevelManager
{
public:
	LevelManager& get();

	void switchLevel(Level*);
	void tickLevel();
private:
	LevelManager();

	Level* currentLevel;
}