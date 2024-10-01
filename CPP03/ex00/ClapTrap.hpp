#pragma once
#ifndef __CLAPTRAP__
#define __CLAPTRAP__

#include <iostream>
#include <string>

class ClapTrap
{
    private :
        std::string name;
        unsigned int hitPoints;
        unsigned int energyPoints;
        unsigned int attackDamage;

    public :
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &clapREF);
        ~ClapTrap();
        ClapTrap& operator=(const ClapTrap &clapREF);
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        unsigned int getHitPoints(void);
};

#endif