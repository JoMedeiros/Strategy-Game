#include "game.hpp"
#include "worker.hpp"

Game::Game() : _window(sf::VideoMode(880,660), "Strategy Game", sf::Style::Titlebar | sf::Style::Close),
_view(sf::FloatRect(-200,-138, 880, 660)), mapa(24,24) 
{ }

void Game::run()
{	
	_view.zoom(0.60f);
	_window.setView(_view);
	while(_window.isOpen())
	{
		sf::Event event;
		Worker w;
		while(_window.pollEvent(event))
		{
			handle_input(event);
		}
		// Update logic here
		_window.clear(sf::Color(16,16,16,255));
		// Draw here
		_window.draw(mapa);
		_window.draw(w);
		_window.display();
	}
}

void Game::handle_input(sf::Event event)
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