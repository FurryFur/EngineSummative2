class System
{
	virtual void tick(Level*, float deltaTime); // Takes deltaTime in seconds
}

class InputSystem : public System
{
	// Reads input from hardware into input components.
	virtual void tick(Level*, float deltaTime) override; 
}

class CollisionSystem : public System
{
	// Checks for collisions between objects and updates collision component.
	virtual void tick(Level*, float deltaTime) override; 
}

class RenderSystem : public System
{
	// Render all entities with sprite or text components.
	virtual void tick(Level*, float deltaTime) override; 
}

class UISystem : public System
{
	// Update current state of UI (sprites and text) based on 
	virtual void tick(Level*, float deltaTime) override; 
}

class SpatialPartitioningSystem : public System
{
	// Keeps acceleration structure for positional lookup of game objects updated.
	// This will only accelerate lookups for objects that have the LookupByPosition component.
	// Lookups can be done through the SpatialPartitioning singleton component.
	virtual void tick(Level*, float deltaTime) override; 
}

class AudioSystem : public System
{
	// Handles playing audio associated with an audio component.
	// Audio components will be updated with current playback position and isPlaying status.
	virtual void tick(Level*, float deltaTime) override; 
}

class AnimationSystem : public System
{
	// Flips sprite frames
	virtual void tick(Level*, float deltaTime) override; 
}

class LevelEditorSystem : public System
{
	// Updates the editor systems.
	// Also ticks render system on currently open level to 
	// display the current state of the level being edited.
	virtual void tick(Level*, float deltaTime) override;

	// Place tile at the specified location in the level.
	// Tiles will be automatically snapped to grid.
	void placeTileAtLocation(Level*, int x, int y);
	void removeTileAtLocation(Level*, int x, int y);
};

