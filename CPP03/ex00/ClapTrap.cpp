#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "Constructor called -> " << this->name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapREF) : name(clapREF.name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "Copy constructor called -> " << this->name << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

unsigned int ClapTrap::getHitPoints(void)
{
    return this->hitPoints;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clapREF)
{
    std::cout << "Copy operator called -> " << this->name << std::endl;
    if (this != &clapREF)
    {
        this->name = clapREF.name;
        this->hitPoints = clapREF.hitPoints;
        this->energyPoints = clapREF.energyPoints;
        this->attackDamage = clapREF.attackDamage;
    }
    return *this;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->hitPoints == 0){
        std::cout << this->name << " is dead, not hitPoint left" << std::endl;
        return;
    }
    if (this->energyPoints == 0) {
        std::cout << this->name << " has no energy point left" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " attacks " << target
              << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    this->energyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount > this->hitPoints){
        std::cout << "You can't reach a negative hitpoint for a ClapTrap" << std::endl;
        return ;
    }
    if (this->hitPoints == 0){
        std::cout << "ClapTrap " << this->name << " is already dead" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " has been damaged by " 
              << amount << " hit points" << std::endl;
    this->hitPoints -= amount;
    if (this->hitPoints == 0)
        std::cout << "ClapTrap " << this->name << " died" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hitPoints == 0){
        std::cout << "ClapTrap " << this->name << " is already dead" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " has been repaired by " 
              << amount << " hit points" << std::endl;
    this->hitPoints += amount;
}