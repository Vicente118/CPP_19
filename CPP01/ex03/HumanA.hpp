#pragma once
#ifndef __HUMAN_A__
#define __HUMAM_A__

#include "Weapon.hpp"

class HumanA
{
    private :
        Weapon& weapon;
        std::string name;
    public :
        HumanA() = default;
        HumanA(std::string name, Weapon& weapon);
        ~HumanA() = default;
        void attack( void );
};

#endif