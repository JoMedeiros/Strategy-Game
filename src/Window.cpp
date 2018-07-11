#include "Window.hpp"

Window::Window() : _window(sf::VideoMode(640,480))
{}

Window::run()
{
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

		// Update logic here
		window.clear(sf::Color(16,16,16,255));
		// Draw here
		window.display();
	}
}