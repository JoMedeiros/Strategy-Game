#include "Window.hpp"
#include "Map.hpp"

Window::Window() : _window(sf::VideoMode(500,500), "Strategy Game")
{}

void Window::run()
{
	sf::Texture texture;
	texture.loadFromFile("TMSSPack/Tile-set - Toen's Medieval Strategy (16x16) - v.1.0.png");

	sf::Sprite map(texture);
	map.setScale(2,2);
	map.setTextureRect(sf::IntRect(0,0,16,16));
	
	Map mapa;
	
	while(_window.isOpen())
	{
		sf::Event event;
		while(_window.pollEvent(event))
		{
			handle_input(event);
		}

		// Update logic here
		_window.clear(sf::Color(16,16,16,255));
		// Draw here
		_window.draw(map);
		_window.draw(mapa);
		_window.display();
	}
}

void Window::handle_input(sf::Event event)
{
	switch (event.type)
	{
		case sf::Event::Closed:
			_window.close();
			break;
		// Handle the input keys
		case sf::Event::KeyPressed:
		{
			switch(event.key.code)
			{
				case sf::Keyboard::Escape:
					_window.close();
					break;
				default:
					break;
			}
		} break;
		default:
			break;
	}
}