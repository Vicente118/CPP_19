#pragma once
#ifndef __SCAVTRAP__
#define __SCAVTRAP__

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    private :
        
    public :
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& scavREF);
        ~ScavTrap();
        ScavTrap& operator=(const ScavTrap& scavREF);
        void attack(const std::string &target);
        void guardGate( void );
};

#endif