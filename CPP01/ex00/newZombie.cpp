#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    if (name.empty()) {
        std::cerr << "Error : invalid name format" << std::endl;
        return nullptr;
    }
    Zombie *newZombie = new Zombie(name);
    if (newZombie == nullptr) {
        std::cerr << "Error : memory allocation" << std::endl;
        return nullptr;
    }
    newZombie->announce();
    return newZombie;
}