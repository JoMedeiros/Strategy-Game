#include "map.hpp"


void Map::draw(sf::RenderTarget& target, 
		sf::RenderStates states) const
{
	for (int i = 0; i < _height; ++i)
	{
		for (int j = 0; j < _width; ++j)
		{
			_assets.setTextureRect(sf::IntRect(32,0,16,16)); /* (32,0) é a cordenada do tile de grama. 
															  *	(16,16) é o tamanho do tile */
			_assets.setPosition(j*16, i*16);
			target.draw(_assets, states);
		}
	}
}
