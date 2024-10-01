#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default FragTrap")
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap Constructor called-> " << this->name << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragREF) : ClapTrap(fragREF)
{
    this->hitPoints = fragREF.hitPoints;
    this->energyPoints = fragREF.energyPoints;
    this->attackDamage = fragREF.attackDamage;
    std::cout << "FragTrap copy constructor called -> " << this->name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& fragREF)
{
    std::cout << "FragTrap assignment operator called -> " << fragREF.name << std::endl;
    if (this != &fragREF)
    {
        ClapTrap::operator=(fragREF);
        this->hitPoints = fragREF.hitPoints;
        this->energyPoints = fragREF.energyPoints;
        this->attackDamage = fragREF.attackDamage;
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called -> " << this->name << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->name << " request positive high five" << std::endl;
}