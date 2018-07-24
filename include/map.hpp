#ifndef _MAP_HPP_
#define _MAP_HPP_

#include <SFML/Graphics.hpp>
#include "entity.hpp"

class Map : public sf::Drawable, public Entity
{
public:
	Map(const Map&) = delete;
	Map& operator=(const Map&) = delete;
	Map() {};
	Map(int width, int height) : _width(width), _height(height) { }
private:
	int _width = 16;
	int _height = 16;
	sf::Sprite** _tiles;
	sf::Texture _texture;
	virtual void draw(sf::RenderTarget& target, 
		sf::RenderStates states) const override;
};

#endif /* _MAP_HPP_ */
