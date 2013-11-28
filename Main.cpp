#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
//#include "Chardicks.h"
//#include "Keystrokes.h"

using namespace sf;
using namespace std;

bool Animation;

int step = 1;

Texture texture;
Sprite Charmander;

RenderWindow window(VideoMode(480, 360), "PokeMOBA!");

void walkUpAnimation()
{
	window.clear();
	texture.loadFromFile("PokeSprites.png", IntRect(0,0,32,32));
	Charmander.setTexture(texture);
	window.draw(Charmander);
	window.display();
	Charmander.move(0,-5.1);
	window.clear();
	texture.loadFromFile("PokeSprites.png", IntRect(32,0,32,32));
	Charmander.setTexture(texture);
	window.draw(Charmander);
	Charmander.move(0,-5.1);
	window.display();

}

void walkDownAnimation()
{
	window.clear();
	texture.loadFromFile("PokeSprites.png", IntRect(0,32,32,32));
	Charmander.setTexture(texture);
	window.draw(Charmander);
	window.display();
	Charmander.move(0,+5.1);
	window.clear();
	texture.loadFromFile("PokeSprites.png", IntRect(32,32,32,32));
	Charmander.setTexture(texture);
	window.draw(Charmander);
	Charmander.move(0,+5.1);
	window.display();
}

void walkLeftAnimation()
{
	window.clear();
	texture.loadFromFile("PokeSprites.png", IntRect(0,64,32,32));
	Charmander.setTexture(texture);
	window.draw(Charmander);
	window.display();
	Charmander.move(-5.1,0);
	window.clear();
	texture.loadFromFile("PokeSprites.png", IntRect(32,64,32,32));
	Charmander.setTexture(texture);
	window.draw(Charmander);
	Charmander.move(-5.1,0);
	window.display();
}

void walkRightAnimation()
{
	window.clear();
	texture.loadFromFile("PokeSprites.png", IntRect(0,96,32,32));
	Charmander.setTexture(texture);
	window.draw(Charmander);
	window.display();
	Charmander.move(+5.1,0);
	window.clear();
	texture.loadFromFile("PokeSprites.png", IntRect(32,96,32,32));
	Charmander.setTexture(texture);
	window.draw(Charmander);
	Charmander.move(+5.1,0);
	window.display();
}

int main()
{
    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

		Charmander.setScale(4,4);
		//BEGINNING OF CONTROLS

		while (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		{
			window.clear();
			// move left...
			walkLeftAnimation();
		}
		while (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		{
			window.clear();
			// move right...
			walkRightAnimation();
		}
		while (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		{
			window.clear();
			// move Up...
			walkUpAnimation();
		}
		while (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		{
			window.clear();
			// move Down...
			walkDownAnimation();
		}
    }

    return 0;
}
