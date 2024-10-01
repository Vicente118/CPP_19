#pragma once
#ifndef __DIAMOND__
#define __DIAMOND__

#include <iostream>
#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private :
        std::string name; 

    public :
        using ScavTrap::attack;

        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap& diamondREF);
        ~DiamondTrap();
        DiamondTrap& operator=(const DiamondTrap& diamondREF);
        void whoAmI( void );
};

#endif