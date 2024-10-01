#pragma once
#ifndef __ANIMAL__
#define __ANIMAL__

#include <iostream>
#include <string>

class Animal
{
    protected :
        std::string type;

    public :
        Animal();
        Animal(const Animal& animalREF);
        virtual ~Animal() = 0;
        Animal& operator=(const Animal& animalREF);
        virtual std::string getType( void ) const;
        virtual void makeSound( void ) const;
};

#endif 