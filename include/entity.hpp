#ifndef _ENTITY_HPP_
#define _ENTITY_HPP_

#include <SFML/Graphics.hpp>
#include "common.hpp"

class Entity 
{
public:
	Entity(int x=0, int y=0);
	virtual ~Entity() = default;
	static sf::Texture _texture;
	static sf::Sprite _assets;
	void set_x(int x);
	void set_y(int y);
	int get_x() const;
	int get_y() const;
	bool is_selected() const;
	void set_selected(bool selected);
protected:
	int _x;
	int _y;
	bool _selected;
};

#endif /* _ENTITY_HPP_ */
