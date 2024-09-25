#pragma once
#ifndef __SCAVTRAP__
#define __SCAVTRAP__

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private :
        
    public :
        ScavTrap();
        ScavTrap(const ScavTrap& scavREF);
        ~ScavTrap();
        ScavTrap& operator=(const ScavTrap& scavREF);
};

#endif