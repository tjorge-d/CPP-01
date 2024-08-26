#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "HumanA.h"
# include "Weapon.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon		&_Weapon;

    public:
        HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	setWeapon(Weapon &weapon);
        void	attack();
};

#endif