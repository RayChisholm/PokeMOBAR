#include <SFML/Window.hpp>
#include "Chardicks.h"

using namespace sf;

void movement()
{
	while (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		// move left...
		Charmander.move(-0.1, 0);
	}
	while (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		// move right...
		Charmander.move(0.1, 0);
	}
	while (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		// move Up...
		Charmander.move(0, 0.1);
	}
	while (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		// move Down...
		Charmander.move(0, -0.1);
	}
}
