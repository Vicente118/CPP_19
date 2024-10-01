#pragma once
#ifndef __Dog__
#define __Dog__

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal
{
    public :
        Dog();
        Dog(const Dog& dogREF);
        ~Dog();
        Dog& operator=(const Dog& dogREF);
        std::string getType( void ) const override;
        void makeSound( void ) const override;
};

#endif 