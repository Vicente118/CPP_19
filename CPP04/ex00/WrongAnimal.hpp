#pragma once
#ifndef __WRONGANIMAL__
#define __WRONGANIMAL__

#include <iostream>
#include <string>

class WrongAnimal
{
    protected :
        std::string type;

    public :
        WrongAnimal();
        WrongAnimal(const WrongAnimal& wrongAnimalREF);
        ~WrongAnimal();
        WrongAnimal& operator=(const WrongAnimal& wrongAnimalREF);
        std::string getType( void ) const;
        void makeSound( void ) const;
};

#endif 