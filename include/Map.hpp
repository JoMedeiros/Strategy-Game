#ifndef _MAP_HPP_
#define _MAP_HPP_

#include <SFML/Graphics.hpp>

class Map : public sf::Drawable
{
public:
	Map(const Map&) = delete;
	Map& operator=(const Map&) = delete;
	Map();
	~Map();
	
private:
	sf::Sprite* _tiles = new sf::Sprite[8];
	sf::Texture _texture;
	virtual void draw(sf::RenderTarget& target, 
		sf::RenderStates states) const override;
};

#endif