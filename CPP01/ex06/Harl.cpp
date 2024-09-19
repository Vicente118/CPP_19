#include "Harl.hpp"

Harl::Harl()
{
    fTab[0] = &Harl::debug;
    fTab[1] = &Harl::info;
    fTab[2] = &Harl::warning;
    fTab[3] = &Harl::error;
}

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do !" << std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;

}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;    
}

void Harl::error()
{
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;   
}

void Harl::complain(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level) 
        {
            while (i < 4) 
            {
                std::cout << "[ " << levels[i] << " ]" << std::endl;
                (this->*fTab[i])();
                std::cout << std::endl;
                i++;
            }
            return ;
        }
    }
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

int whichLevel(std::string level)
{
    int i = 0;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    while (levels[i] != level && i < 4)
        i++;
    if (i < 4)
        return i;
    return -1;
}