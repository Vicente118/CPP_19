#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(nullptr) {}

HumanB::HumanB(std::string name, Weapon& weapon) : name(name), weapon(&weapon) {}

void HumanB::attack()
{
    if (this->weapon)
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << this->name << " has no weapon ! " << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}
