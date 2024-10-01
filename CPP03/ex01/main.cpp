#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap robot("newRobot");
    ScavTrap robot1 = robot;
    std::cout << "-----------------" << std::endl;

    robot.attack("ennemy");
    robot1.attack("ennem");
    std::cout << "-----------------" << std::endl;

    robot.guardGate();
    robot1.guardGate();
    std::cout << "-----------------" << std::endl;

    std::cout << robot.getHitPoints() << std::endl;
    robot.takeDamage(10);
    std::cout << robot.getHitPoints() << std::endl;
    std::cout << "-----------------" << std::endl;
    
    return 0;
}