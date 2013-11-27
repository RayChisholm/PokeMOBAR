#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "Chardicks.h"
//#include "Keystrokes.h"

using namespace sf;
using namespace std;

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


        window.clear();
		loadTextureFace();
		applyTexture();
		window.draw(Charmander);
        window.display();
    }

    return 0;
}
