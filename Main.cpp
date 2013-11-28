#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

using namespace sf;
using namespace std;


Texture texture;
Sprite sprite;

RenderWindow window(VideoMode(480, 360), "PokeMOBA!");

void walkAnimation(int x1, int y1, double speedx, double speedy)
{
    window.clear();
    texture.loadFromFile("PokeSprites.png", IntRect(x1,y1,32,32));
    sprite.setTexture(texture);
    window.draw(sprite);
    window.display();
    sprite.move(speedx,speedy);
    window.clear();
    texture.loadFromFile("PokeSprites.png", IntRect(x1+32,y1,32,32));
    sprite.setTexture(texture);
    window.draw(sprite);
    sprite.move(speedx,speedy);
    window.display();	
}

void controls()
{
	
	while (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        walkAnimation(0,64,-5.1,0);
    
	while (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		walkAnimation(0,96,5.1,0);
    
	while (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	    walkAnimation(0,0,0,-5.1);
   
	while (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        walkAnimation(0,32,0,5.1);
    	
	while (sf::Keyboard::isKeyPressed(sf::Keyboard::E))
        walkAnimation(0,0,10.1,-10.1);     
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

		sprite.setScale(4,4); //Increases the size of the sprite (xratio,yratio)
		controls();

    } //Close of while (window.isOpen())

    return 0;
} //Close of int main()
