struct Breakable : public Component 
{
	bool shouldBreak;
}

class BreakableSystem : public System 
{
	virtual void tick(float deltaTime) override; // Override tick to 
}