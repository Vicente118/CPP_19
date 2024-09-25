#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {}

ScavTrap::ScavTrap(const ScavTrap& scavREF) : ClapTrap(scavREF) {}

ScavTrap::~ScavTrap() {}