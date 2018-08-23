class System
{
	virtual void tick(float deltaTime); // Takes deltaTime in seconds
}

class CollisionSystem : public System
{
	// Checks for collisions between objects and updates collision component.
	virtual void tick(float deltaTime) override; 
}

class RenderSystem : public System
{
	// Render all entities with sprite or text components.
	virtual void tick(float deltaTime) override; 
}

class UISystem : public System
{
	// Update current state of UI (sprites and text) based on 
	virtual void tick(float deltaTime) override; 
}

class SpatialPartitioningSystem : public System
{
	// Keeps acceleration structure for positional lookup of game objects updated.
	// This will only accelerate lookups for objects that have the LookupByPosition component.
	// Lookups can be done through the SpatialPartitioning singleton component.
	virtual void tick(float deltaTime) override; 
}

class AudioSystem : public System
{
	// Handles playing sounds queued up in the audio component
	virtual void tick(float deltaTime) override; 
}