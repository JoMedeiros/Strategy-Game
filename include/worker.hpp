#ifndef _WORKER_HPP_
#define _WORKER_HPP_

#include "unit.hpp"
#include "entity.hpp"

class Worker : public Unit, public sf::Drawable
{
public:
	Worker(){}
private:
	int collected_wood; ///<
	int collected_rock; ///<
	int collected_iron; ///<
	int collected_food; ///<
	virtual void draw(sf::RenderTarget& target, 
		sf::RenderStates states) const override;
};

#endif /* _WORKER_HPP_ */
