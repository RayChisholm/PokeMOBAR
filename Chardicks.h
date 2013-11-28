#include <SFML/Graphics.hpp>
#include <SFML/System/Clock.hpp>
#include <SFML/System/Time.hpp>

using namespace sf;

Clock TIMER;
Time t2 = milliseconds(333);
Time t1 = TIMER.getElapsedTime();
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

void animate()
{
	int step = 0;
	TIMER.restart();
	if (t1 == milliseconds(333) && step == 0) 
	{
		texture.loadFromFile("PokeSprites.png", IntRect(0,0,32,32));
		step = 1;
		TIMER.restart();
	}
	if (t1 == t2 && step = 1)
	{
		texture.loadFromFile("PokeSprites.png", IntRect(0,32,32,32));
		step = 0;
		TIMER.restart();
	}
}

