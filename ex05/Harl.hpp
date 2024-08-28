#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string.h>

class	Harl
{
	private:
		void		_debug();
		void		_info();
		void		_warning();
		void		_error();
		void		(Harl::*_level[4])();
		std::string	_levelFinder;


	public:
		Harl();
		~Harl();
		void complain(std::string level);
};

#endif