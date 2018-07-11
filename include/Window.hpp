#ifndef _WINDOW_HPP_
#define _WINDOW_HPP_

#include <SFML/Graphics.hpp>

class Window
{
private:
	sf::RenderWindow _window;
	sf::Sprite _map;
	void handle_input(sf::Event event);
public:
	Window();
	void run();
};

#endif