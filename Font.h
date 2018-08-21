struct Font
{
	Texture* fontAtlas;
	int numCharacters;
	int characterSpacing;

	Sprite getCharacterSprite(char character); // Characters should be laid out in texture in a standardized way
}
