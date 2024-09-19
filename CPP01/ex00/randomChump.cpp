#include "Zombie.hpp"

void randomChump(std::string name)
{
    if (name.empty()) {
        std::cerr << "Error : invalid name format" << std::endl;
        return ;
    }
    Zombie newZombie = Zombie(name);
    newZombie.announce();
}