#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << "Default WrongAnimal constructor called, type : " << this->type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wrongAnimalREF) : type(wrongAnimalREF.type) {
    std::cout << "WrongAnimal copy constructor called, type : " << this->type << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wrongAnimalREF) {
    std::cout << "WrongAnimal assignment operator called, type : " << this->type << std::endl;
    if (this != &wrongAnimalREF)
        this->type = wrongAnimalREF.type;
    return *this;
}

std::string WrongAnimal::getType(void) const {
    return this->type;
}

void WrongAnimal::makeSound(void) const {
    std::cout << "WrongAnimal generic sound!" << std::endl;
}
