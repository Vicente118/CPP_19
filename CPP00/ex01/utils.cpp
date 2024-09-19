#include "utils.hpp"

void    eof_sig(void)
{
    if (std::cin.eof() == 1)
    {
        std::cout << "^D\n\nEOF signal has been sent, ending of the program" << std::endl;
        std::exit(1);
    }
}

void    displayWord(std::string str)
{
    if (str.size() == 10)
        std::cout << str;
    if (str.size() < 10)
    {
        for (int i = 0; i < 10 - str.size(); i++)
            std::cout << " ";
        std::cout << str;
    }
    else
    {
        for(int i = 0; i < 9; i++)
            std::cout << str[i];
        std::cout << '.';
    }
}
