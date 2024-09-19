#include "Zombie.hpp"

int main()
{
    //Initialize zombie on the head and returns it :
    Zombie *heapZombie = newZombie("heapZombie");
    if (heapZombie == nullptr)
        return (1);
    //Initialize zombie on the stack in the function scope
    randomChump("stackZombie");

    delete heapZombie;
    return (0);
}