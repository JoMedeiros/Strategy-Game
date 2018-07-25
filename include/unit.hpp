#ifndef _UNIT_HPP_
#define _UNIT_HPP_

#include "entity.hpp"

class Unit : public Entity
{
public:
	Unit();
	int get_quantity() const;
	void set_quantity(int quantity);
private:
	int _quantity; ///< Number of units
	int _health; ///< Unit health
};

#include "worker.hpp"
//#include "soldier.h"

#endif /* _UNIT_HPP_ */
