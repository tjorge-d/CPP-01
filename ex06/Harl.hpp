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
		std::string	_levelFinder[4];

	public:
		Harl();
		~Harl();
		void 	harlFilter(std::string level);
};

#endif