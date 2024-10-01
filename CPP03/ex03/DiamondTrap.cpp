#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() 
    : ClapTrap(), FragTrap(),
      ScavTrap()
{
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap Constructor called -> " << this->name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) 
    : ClapTrap(name + "_clap_name"), FragTrap(),
                                     ScavTrap(),
                                     name(name)
{
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap Constructor called -> " << this->name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& diamondREF)
    : ClapTrap(diamondREF), FragTrap(diamondREF), ScavTrap(diamondREF)
{
    this->ClapTrap::name = diamondREF.ClapTrap::name;
    std::cout << "DiamondTrap copy constructor called -> " << this->name << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& diamondREF)
{
    std::cout << "DiamondTrap assignment operator called -> " << diamondREF.name << std::endl;

    if (this != &diamondREF)
    {
        ClapTrap::operator=(diamondREF); 
        FragTrap::operator=(diamondREF); 
        ScavTrap::operator=(diamondREF);
        this->name = diamondREF.name;
    }
    return *this;
}

DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap Destructor called -> " << this->name << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << "I am " << this->name << " and my ClapTrap name is " << ClapTrap::name << std::endl;
}