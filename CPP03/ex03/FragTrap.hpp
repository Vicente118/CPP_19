#pragma once
#ifndef __FRAGTRAP__
#define __FRAGTRAP__

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    private :
        
    public :
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& fragREF);
        ~FragTrap();
        FragTrap& operator=(const FragTrap& fragREF);
        void highFivesGuys( void );
};

#endif