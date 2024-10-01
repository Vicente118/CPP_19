#pragma once
#ifndef __WRONGCAT__
#define __WRONGCAT__

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat& wrongCatREF);
        ~WrongCat();
        WrongCat& operator=(const WrongCat& wrongCatREF);
        void makeSound(void) const;
};

#endif
