struct Component
{
	GameObject* GetOwningObject();
}

struct ContactInfo
{
	vec2 contactNormal;
	GameObject* otherObject;
	std::string collisionChannel;
}

struct Collision : public Component
{
	// A list of currently contacting 
	std::vector<ContactInfo>;
	// Each collision sprite corresponds to its own collision channel, indexed by a human readable string
	std::map<std::string, Sprite*> collisionChannels; 
}

struct UIMenuButton : public Component
{
	bool selected;

	// Links to other menu items
	UIMenuButton* up;
	UIMenuButton* down;
	UIMenuButton* leff;
	UIMenuButton* right;
}

// Singleton component
struct SpatialPartitioning : public Component
{
	// Some kind of acceleration structure for looking up objects by location
	// Could be a kd-tree, bsp-tree, octree, etc.
	SpatialPartition spatialPartition;
}

struct LookupByPosition : public Component
{
	// Current position in the spatial partition data structure.
	SpatialPartitionNode* spatialPartitionNode;
}