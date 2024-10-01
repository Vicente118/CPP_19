#pragma once
#ifndef __BRAIN__
#define __BRAIN__

#include <iostream>
#include <string>

class Brain
{
    private :
        std::string ideas[100];
    public :
        Brain();   
        Brain(const Brain& brainREF);
        ~Brain();
        Brain& operator=(const Brain& brainREF);
        void setIdea(const int index, std::string idea);
        std::string getIdea(const int index) const;
};

#endif