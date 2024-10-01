#include "Cat.hpp"

Cat::Cat() {
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Default cat constructor called, type : " << this->type << std::endl;
}

Cat::Cat(const Cat& catREF) : Animal(catREF) {
    this->brain = new Brain(*catREF.brain);
    std::cout << "Cat copy constructor called, type : " << this->type << std::endl;
}

Cat::~Cat() {
    delete this->brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& catREF) {
    std::cout << "Cat assignment operator called, type : " << this->type << std::endl;
    if (this != &catREF)
    {   
        Animal::operator=(catREF);
        delete this->brain;
        this->brain = new Brain(*catREF.brain);
    }
    return *this;
}

std::string Cat::getType( void ) const {
    return this->type;
}

void Cat::makeSound() const {
    std::cout << "Meooooooow !" << std::endl;
}

void	Cat::getIdeas(void) const
{
	for (int i = 0; i < 3; i++)
		std::cout << "  Idea " << i << " of the Cat is: \"" << this->brain->getIdea(i) << "\" at the address " << this->brain->getIdea(i) << std::endl;
}

void	Cat::setIdea(int i, std::string idea)
{
		this->brain->setIdea(i, idea);
}