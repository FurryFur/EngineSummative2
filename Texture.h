struct Color
{
	char r;
	char g;
	char b;
	char a;
}

struct Texture
{
	std::vector<Color> data;
	Color getPixel(int row, int column);

	loadTexture(std::string path);
}

struct TextureView
{
	int xCoord; // In Sprite Sheet (Top left corner)
	int yCoord; // In Sprite Sheet (Top left corner)
	int width;
	int height;
}
