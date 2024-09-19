#include "Zombie.hpp"

Zombie* zombieHorde( int N,  std::string name )
{
    if (N <= 0) {
        std::cerr << "Error : invalid number of zombies" << std::endl;
        return nullptr;
    }

    if (name.empty()) {
        std::cerr << "Error : invalid name format" << std::endl;
        return nullptr;
    }

    Zombie *horde = new Zombie[N];
    for (int i = 0; i < N; i++) {
        horde[i] = Zombie(name);
        horde[i].announce();
    }

    return (horde);
}
