#ifndef _UNIT_HPP_
#define _UNIT_HPP_

#include "entity.hpp"

class Unit : public Entity
{
public:
	Unit() { };
private:
	int quantity; ///< Number of units
	int health; ///< Unit health
};

#include "worker.hpp"
//#include "soldier.h"

#endif /* _UNIT_HPP_ */
