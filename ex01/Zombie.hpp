#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string.h>

class Zombie
{
	private:
		std::string	_name;
	
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	setName(std::string name);
		void	announce();
};

#endif