#include "worker.hpp"

void Worker::draw(sf::RenderTarget& target, 
		sf::RenderStates states) const
{
	_assets.setTextureRect(sf::IntRect(2*16, 35*16, 16 ,16)); /* (32,0) é a cordenada do tile de grama. 
														    * (16,16) é o tamanho do tile */
	_assets.setPosition(32, 32);
	target.draw(_assets, states);
	// Desenhando o número de trabalhadores
	_assets.setTextureRect(sf::IntRect(1*16, 23*16, 16 ,16)); // 8 unidades
	target.draw(_assets, states);
	_assets.setTextureRect(sf::IntRect(0*16, 21*16, 16 ,16)); // 1 dezena
	_assets.setPosition(27, 32);
	target.draw(_assets, states);
}