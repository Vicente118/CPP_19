#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap first;
    ClapTrap second("Second");
    ClapTrap third(second);

    second.attack("Target");

    std::cout << "HP left : " << second.getHitPoints() << std::endl;
    second.takeDamage(5);
    std::cout << "HP left : " << second.getHitPoints() << std::endl;
    second.beRepaired(10);
    std::cout << "HP left : " << second.getHitPoints() << std::endl;
    second.takeDamage(15);
    std::cout << "HP left : " << second.getHitPoints() << std::endl;
    second.beRepaired(10);
    std::cout << "HP left : " << second.getHitPoints() << std::endl;

    return 0;
}