#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap first;
    ClapTrap second("Second");
    ClapTrap third(second);
    std::cout << "--------------------" << std::endl;
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
    
    std::cout << "--------------------" << std::endl;
    return 0;
}