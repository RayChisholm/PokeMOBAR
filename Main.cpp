#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
//#include "Chardicks.h"
//#include "Keystrokes.h"

using namespace sf;
using namespace std;

Texture texture;
Sprite Charmander;

int main()
{
    RenderWindow window(VideoMode(640, 480), "FUCKING CHARMANDER!");

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

		Clock TIMER;
		TIMER.restart();
		Time t2 = milliseconds(333);
		Time t1 = TIMER.getElapsedTime();
		int step = 0;

		TIMER.restart();

		if (t1 >= milliseconds(333)) 
		{
			window.clear();
			texture.loadFromFile("PokeSprites.png", IntRect(1,1,32,32));
			Charmander.setTexture(texture);
			step = 1;
			TIMER.restart();
			window.draw(Charmander);
			window.display();

		}
		if (t1 >= t2)
		{
			window.clear();
			texture.loadFromFile("PokeSprites.png", IntRect(0,32,32,32));
			Charmander.setTexture(texture);
			step = 0;
			TIMER.restart();
			window.draw(Charmander);
			window.display();
		}
    }

    return 0;
}
