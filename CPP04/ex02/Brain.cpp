#include "Brain.hpp"

Brain::Brain() {
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = "Ideas";
    }
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& brainREF) {
    for(int i = 0; i < 100; i++) {
        this->ideas[i] = brainREF.ideas[i];
    }
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& brainREF) {
    std::cout << "Brain copy assignement called" << std::endl;
    if (this != &brainREF) {
        for(int i = 0; i < 100; i++) {
            this->ideas[i] = brainREF.ideas[i];
        }
    }
    return *this;
}

void Brain::setIdea(const int index, std::string idea) {
    if (index < 100) {
        std::cout << "Idea set" << std::endl;
        this->ideas[index] = idea;
    }
    else
        std::cout << "A brain has only 100 ideas" << std::endl;
}

std::string Brain::getIdea(const int index) const {
    if (index < 100)
        return this->ideas[index];
    std::cout << "A brain has only 100 ideas" << std::endl;
    return nullptr;
}