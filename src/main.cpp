#include <iostream>
#include <SFML/Graphics.hpp>

int main(int arc, char const *argv[])
{
	sf::RenderWindow window(sf::VideoMode(640,480),"Bouncing Capybaras");
	
	sf::Texture capybarasTexture;
	capybarasTexture.loadFromFile("fantasyhextiles_v3.png");
	sf::Sprite capybaras(capybarasTexture);
	//capybaras.setScale(0.10,0.10);
	sf::Vector2u size = capybarasTexture.getSize();
	capybaras.setOrigin(size.x/2,size.y/2);
	
	sf::Vector2f increment(0.05,0.05);
		
	while(window.isOpen())
	{
		sf::Event event;
		while(window.pollEvent(event))
		{
			if(event.type == sf::Event::Closed)
			{
				// Close window button clicked
				window.close();
			}
		}
		if ((capybaras.getPosition().x + (size.x/2) > window.getSize().x and increment.x>0) || (capybaras.getPosition().x - (size.x/2)<0 and increment.x < 0))
		{
			/* Reverse the direction on X axis. */
			increment.x = -increment.x;
		}
		if ((capybaras.getPosition().y + (size.y/2) > window.getSize().y and increment.y>0) || (capybaras.getPosition().y - (size.y/2)<0 and increment.y < 0))
		{
			/* Reverse the direction on Y axis. */
			increment.y = -increment.y;
		}

		capybaras.setPosition(capybaras.getPosition() + increment);
		window.clear(sf::Color(16,16,16,255));
		window.draw(capybaras);
		window.display();
	}
	return 0;
}
