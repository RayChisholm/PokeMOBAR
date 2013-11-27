#include <SFML/Graphics.hpp>;

using namespace sf;

Texture texture;
Sprite Charmander;

int face = 1;

void loadTextureFace()
{
	if(face == 1)
	{
		texture.loadFromFile("PokeSprites.png", IntRect(0, 0, 32, 32));
	}

	if(face == 2)
	{
		texture.loadFromFile("PokeSprites.png", IntRect(32, 0, 32, 32));
	}
}

void applyTexture()
{
	Charmander.setTexture(texture);
}
