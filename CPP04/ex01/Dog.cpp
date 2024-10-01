#include "Dog.hpp"

Dog::Dog() {
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Default Dog constructor called, type : " << this->type << std::endl;
}

Dog::Dog(const Dog& dogREF) : Animal(dogREF) {
    this->brain = new Brain(*dogREF.brain);
    std::cout << "Dog copy constructor called, type : " << this->type << std::endl;
}

Dog::~Dog() {
    delete this->brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& dogREF) {
    std::cout << "Dog assignment operator called, type : " << this->type << std::endl;
    if (this != &dogREF)
    {   
        Animal::operator=(dogREF);
        delete this->brain;
        this->brain = new Brain(*dogREF.brain);
    }
    return *this;
}

std::string Dog::getType( void ) const {
    return this->type;
}

void Dog::makeSound() const {
    std::cout << "Wouaf Wouaf !" << std::endl;
}

void	Dog::getIdeas(void) const
{
	for (int i = 0; i < 3; i++)
		std::cout << "  Idea " << i << " of the Dog is: \"" << this->brain->getIdea(i) << "\" at the address " << this->brain->getIdea(i) << std::endl;
}

void	Dog::setIdea(int i, std::string idea)
{
		this->brain->setIdea(i, idea);
}