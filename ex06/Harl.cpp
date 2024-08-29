#include "Harl.hpp"

Harl::Harl()
{
	_levelFinder[0] = "DEBUG";
	_levelFinder[1] = "INFO";
	_levelFinder[2] = "WARNING";
	_levelFinder[3] = "ERROR";
	std::cout << "Constructor called\n";
}

Harl::~Harl()
{
	std::cout << "Destructor called\n";
}

void	Harl::harlFilter(std::string level)
{
	int	i = 0;
	while (i <= 3)
	{
		if (!_levelFinder[i].compare(level))
			break ;
		i++;
	}
	switch (i)
	{
		case 0:{
			_debug();
			_info();
			_warning();
			_error();
			break;
		}
		case 1:{
			_info();
			_warning();
			_error();
			break;
		}
		case 2:{
			_warning();
			_error();
			break;
		}
		case 3:{
			_error();
			break;
		}
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break;
	}
}

void	Harl::_debug()
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\n";
	std::cout << "I really do!\n\n";
}

void	Harl::_info()
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money.\n";
	std::cout << "You didn't putenough bacon in my burger!\n";
	std::cout << "If you did, I wouldn't be asking for more!\n\n";
}

void	Harl::_warning()
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free.\n";
	std::cout << "I've been coming for years whereas you started working here since last month.\n\n";
}

void	Harl::_error()
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable!\n";
	std::cout << "I want to speak to the manager now.\n\n";
}