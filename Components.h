struct Component
{
	GameObject* GetOwningObject();
}

struct Position : public Component
{
	int x;
	int y;
}

struct Input : public Component
{
	int padIndex;
	bool up;
	bool down;
	bool left;
	bool right;
	bool start;
	bool select;
	bool b;
	bool a;
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

	std::function<void()> upCallback();
	std::function<void()> downCallback();
	std::function<void()> leftCallback();
	std::function<void()> rightCallback();
	std::function<void()> pressedCallback();
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

struct AudioComponent : public Component
{
public:
	AudioComponent();
	AudioComponent(const std::string& audioFile);

	void playAudio(); // Play from current position
	void pauseAudio();
	void stopAudio(); // Stop playback and reset playback position to start
	bool getIsPlaying();
	void setIsPlaying(bool isPlaying);
	void setIsLooping(bool isLooping);
	bool getIsLooping();
	void setPlaybackPosition(float playbackPosition);
	float getPlaybackPosition();
	void playFromStart();

	void loadData(const std::string& audioFile);

	std::vector<float> audioData;

private:
	bool isPlaying;
	bool isLooping;
	float playbackPosition;
}
