#pragma once
#ifndef __HUMAN_B__
#define __HUMAM_B__

#include "Weapon.hpp"

class HumanB
{
    private :
        Weapon *weapon;
        std::string name;
    public :
        HumanB() = default;
        HumanB(std::string name);
        HumanB(std::string name, Weapon& weapon);
        ~HumanB() = default;
        void attack( void );
        void setWeapon(Weapon& weapon);

};

#endif
