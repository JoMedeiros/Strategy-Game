#include "entity.hpp"

// Inicialização dos atributos static. Não é possível inicializar no header
sf::Texture Entity::_texture;
sf::Sprite Entity::_assets;

Entity::Entity()
{
	_texture.loadFromFile("TMSSPack/Tile-set - Toen's Medieval Strategy (16x16) - v.1.0.png");
	_assets.setTexture(_texture);
}
