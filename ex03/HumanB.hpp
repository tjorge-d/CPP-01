#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "HumanB.h"

class HumanB
{
    private:
        std::string _name;
        Weapon      *_Weapon;

    public:
        HumanB(const std::string name);
		~HumanB();
		void	setWeapon(Weapon &weapon);
        void	attack();
};

#endif