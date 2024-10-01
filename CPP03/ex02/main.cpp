#include "FragTrap.hpp"

int main(void)
{
    FragTrap robot("newFragTrap");
    FragTrap robot1 = robot;
    std::cout << "-----------------" << std::endl;

    robot.attack("ennemy");
    robot1.attack("ennemy");
    std::cout << "-----------------" << std::endl;

    robot.highFivesGuys();
    robot.highFivesGuys();
    std::cout << "-----------------" << std::endl;

    std::cout << robot.getHitPoints() << std::endl;
    robot.takeDamage(50);
    std::cout << robot.getHitPoints() << std::endl;
    std::cout << "-----------------" << std::endl;

    
    return 0;
}