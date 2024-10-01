#pragma once
#ifndef __Cat__
#define __Cat__

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private :
        Brain *brain;
    public :
        Cat();
        Cat(const Cat& catREF);
        ~Cat();
        Cat& operator=(const Cat& catREF);
        std::string getType( void ) const override;
        void makeSound( void ) const override;
        void getIdeas(void) const;
        void setIdea(int i, std::string idea);


};

#endif 