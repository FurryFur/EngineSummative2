struct Sprite : public Component
{
	Texture* spriteSheet;
	std::vector<TextureView> spriteFrames;
	int currentFrameIndex;
	int zindex;
	int width;  // Used for scaling and collision
	int height; // Used for scaling and collision
	float animationSpeed;
	bool isRendered;
}
