#include "game.hpp"
#include "village.hpp"

Game::Game() : _window(sf::VideoMode(880,660), "Strategy Game", sf::Style::Titlebar | sf::Style::Close),
_view(sf::FloatRect(-180,-138, 880, 660)), mapa(24,24) 
{ }

void Game::run()
{	
	_view.zoom(0.60f);
	_window.setView(_view);
	Village v;
	Worker w1(RED, 1, 2);
	Worker w2(BLUE, 2, 2);
	Worker w3(GREEN, 1, 3);
	Worker w4(YELLOW, 2, 3);
	
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
		_window.draw(mapa);
		_window.draw(w1);
		_window.draw(w2);
		_window.draw(w3);
		_window.draw(w4);
		_window.draw(v);
		_window.draw(sel);
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
					sel.handle_input(event);
					break;
			}
		} break;
		default:
			break;
	}
}
