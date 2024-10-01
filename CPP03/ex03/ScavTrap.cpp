#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap Constructor called-> " << this->name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scavREF) : ClapTrap(scavREF)
{
    this->hitPoints = scavREF.hitPoints;
    this->energyPoints = scavREF.energyPoints;
    this->attackDamage = scavREF.attackDamage;
    std::cout << "ScavTrap copy constructor called -> " << this->name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavREF)
{
    std::cout << "ScavTrap assignment operator called -> " << scavREF.name << std::endl;
    if (this != &scavREF)
    {
        ClapTrap::operator=(scavREF);  // Utilisation de l'opérateur d'assignation de ClapTrap
        this->hitPoints = scavREF.hitPoints;
        this->energyPoints = scavREF.energyPoints;
        this->attackDamage = scavREF.attackDamage;
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called -> " << this->name << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (this->hitPoints == 0) {
        std::cout << "ScavTrap " << this->name << " is dead, no hit points left" << std::endl;
        return;
    }
    if (this->energyPoints == 0) {
        std::cout << "ScavTrap " << this->name << " has no energy points left" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << this->name << " attacks " << target
              << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    this->energyPoints -= 1;

}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode" << std::endl;
}
