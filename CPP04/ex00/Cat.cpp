#include "Cat.hpp"

Cat::Cat() {
    this->type = "Cat";
    std::cout << "Default cat constructor called, type : " << this->type << std::endl;
}

Cat::Cat(const Cat& catREF) : Animal(catREF) {
    std::cout << "Cat copy constructor called, type : " << this->type << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& catREF) {
    std::cout << "Cat assignment operator called, type : " << this->type << std::endl;
    if (this != &catREF)
        Animal::operator=(catREF);
    return *this;
}

std::string Cat::getType( void ) const {
    return this->type;
}

void Cat::makeSound() const {
    std::cout << "Meooooooow !" << std::endl;
}