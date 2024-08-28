#include "Harl.hpp"

Harl::Harl()
{
	_levelFinder.append(1, 0);
	_levelFinder.append("DEBUG ");
	_levelFinder.append(1, 1);
	_levelFinder.append("INFO ");
	_levelFinder.append(1, 2);
	_levelFinder.append("WARNING ");
	_levelFinder.append(1, 3);
	_levelFinder.append("ERROR ");
	_level[0] = &Harl::_debug;
	_level[1] = &Harl::_info;
	_level[2] = &Harl::_warning;
	_level[3] = &Harl::_error;
}

Harl::~Harl()
{
	std::cout << "Destructor called\n";
}

void	Harl::complain(std::string level)
{
	level.append(" ");
	int	index = _levelFinder.find(level) - 1;
	if (index >= 0)
		index = _levelFinder[index];
	if (index <= 4 && index >= 0)
		(this->*_level[index])();
}

void	Harl::_debug()
{
	std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void	Harl::_info()
{
	std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn't putenough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void	Harl::_warning()
{
	std::cout << "WARNING: I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n";
}

void	Harl::_error()
{
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager now.\n";
}