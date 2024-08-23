#include "Zombie.h"

Zombie::Zombie()
{
	_name = "default";
	std::cout << "Default constructor called.\n";
}

Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout << "Custom constructor called.\n";
}

Zombie::~Zombie()
{
	std::cout <<  "The zombie " << _name << " destructor was called.\n";
}

void Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}