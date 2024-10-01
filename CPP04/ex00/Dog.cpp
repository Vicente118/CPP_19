#include "Dog.hpp"

Dog::Dog() {
    this->type = "Dog";
    std::cout << "Default Dog constructor called, type : " << this->type << std::endl;
}

Dog::Dog(const Dog& dogREF) : Animal(dogREF) {
    std::cout << "Dog copy constructor called, type : " << this->type << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& dogREF) {
    std::cout << "Dog assignment operator called, type : " << this->type << std::endl;
    if (this != &dogREF)
        Animal::operator=(dogREF);
    return *this;
}

std::string Dog::getType( void ) const{
    return this->type;
}

void Dog::makeSound() const {
    std::cout << "Wouaf Wouaf !" << std::endl;
}