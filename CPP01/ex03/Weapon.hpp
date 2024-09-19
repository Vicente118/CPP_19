#pragma once
#ifndef __WEAPON__
#define __WEAPON__

#include <iostream>
#include <string>

class Weapon
{
    private :
        std::string type;

    public :
        Weapon();
        Weapon(std::string type);
        ~Weapon() = default;
        const std::string& getType();
        void setType(std::string newType);
};

#endif