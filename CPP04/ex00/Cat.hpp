#pragma once
#ifndef __Cat__
#define __Cat__

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
    public :
        Cat();
        Cat(const Cat& catREF);
        ~Cat();
        Cat& operator=(const Cat& catREF);
        std::string getType( void ) const override;
        void makeSound( void ) const override;
};

#endif 