#include "Animal.hpp"

Animal::Animal() : type("RandomAnimal") {
    std::cout << "Default Animal constructor called, type : " << this->type << std::endl;
}

Animal::Animal(const Animal& animalREF) : type(animalREF.type) {
    std::cout << "Animal copy constructor called, type : " << this->type << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& animalREF) {
    std::cout << "Animal assignment operator called, type : " << this->type << std::endl;
    if (this != &animalREF)
        this->type = animalREF.type;
    return *this;
}

std::string Animal::getType() const
{
    return this->type;
}

void Animal::makeSound() const {
    std::cout << "Random animal sound !" << std::endl;
}
