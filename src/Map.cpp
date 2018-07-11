#include "Map.hpp"

Map::Map()
{
	_texture.loadFromFile("TMSSPack/Tile-set - Toen's Medieval Strategy (16x16) - v.1.0.png");
	/* Drawing the map */
	for (int i = 0; i < 8; ++i)
	{
		_tiles[i] = sf::Sprite(_texture);
		_tiles[i].setScale(2,2);
		_tiles[i].setTextureRect(
			sf::IntRect(96,0,16,16));
		_tiles[i].setPosition(64,i*32);
	}
}

Map::~Map()
{
	// delete _tiles;
}

void Map::draw(sf::RenderTarget& target, 
		sf::RenderStates states) const
{
	for (int i = 0; i < 8; ++i)
	{
		target.draw(_tiles[i], states);
	}
}
