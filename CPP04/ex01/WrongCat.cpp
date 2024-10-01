#include "WrongCat.hpp"

WrongCat::WrongCat() {
    this->type = "WrongCat";
    std::cout << "Default WrongCat constructor called, type : " << this->type << std::endl;
}

WrongCat::WrongCat(const WrongCat& wrongCatREF) : WrongAnimal(wrongCatREF) {
    std::cout << "WrongCat copy constructor called, type : " << this->type << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& wrongCatREF) {
    std::cout << "WrongCat assignment operator called, type : " << wrongCatREF.type << std::endl;
    if (this != &wrongCatREF) {
        WrongAnimal::operator=(wrongCatREF);
    }
    return *this;
}

void WrongCat::makeSound(void) const {
    std::cout << "Meooooooow (but it's a wrong cat!)" << std::endl;
}
