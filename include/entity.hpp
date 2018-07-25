#ifndef _ENTITY_HPP_
#define _ENTITY_HPP_

#include <SFML/Graphics.hpp>

#ifndef MAP_WIDTH
#define MAP_WIDTH 24
#endif

#ifndef MAP_HEIGHT
#define MAP_HEIGHT 24
#endif

enum Color
{
	BLUE, RED, YELLOW, GREEN, WHITE
};

class Entity 
{
public:
	Entity(int x=0, int y=0);
	static sf::Texture _texture;
	static sf::Sprite _assets;
	void set_x(int x);
	void set_y(int y);
	int get_x() const;
	int get_y() const;
protected:
	int _x;
	int _y;
};

#endif /* _ENTITY_HPP_ */
