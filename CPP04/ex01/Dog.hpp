#pragma once
#ifndef __Dog__
#define __Dog__

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private :
        Brain *brain;
    public :
        Dog();
        Dog(const Dog& dogREF);
        ~Dog();
        Dog& operator=(const Dog& dogREF);
        std::string getType( void ) const override;
        void makeSound( void ) const override;
        void getIdeas(void) const;
        void setIdea(int i, std::string idea);
};

#endif 