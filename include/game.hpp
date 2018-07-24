#ifndef _WINDOW_HPP_
#define _WINDOW_HPP_

#include <SFML/Graphics.hpp>
//#include "Entity.hpp"
#include "map.hpp"

class Game
{
private:
	sf::RenderWindow _window;
	sf::View _view;
	Map mapa;
	void handle_input(sf::Event event);
public:
	Game();
	void run();
};

#endif