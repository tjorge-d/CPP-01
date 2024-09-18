#include "Weapon.h"

Weapon::Weapon(std::string type)
{
	_type = type;
	std::cout << "Weapon constructor called (" << _type << ").\n";
}

Weapon::~Weapon()
{
	std::cout << "Weapon default destructor called.\n";
}

const std::string& Weapon::getType()
{
    return (_type);
}

void Weapon::setType(std::string type)
{
	_type = type;
}