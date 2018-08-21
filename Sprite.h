struct Sprite : public Component
{
	Texture* spriteSheet;
	TextureView[] spriteFrames;
	int currentFrameIndex;
	int zindex;
	int width;  // Used for scaling and collision
	int height; // Used for scaling and collision
}
