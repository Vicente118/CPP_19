#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Bad number of arguments" << std::endl;
        return 1;
    }
    Harl harl;
    int level = whichLevel(argv[1]);
    switch(level)
    {
        case 0 :
            harl.complain("DEBUG");
            break;
        case 1 :
            harl.complain("INFO");
            break;
        case 2 :
            harl.complain("WARNING");
            break;
        case 3 :
            harl.complain("ERROR");
            break;
        default :
            harl.complain("");
    }
    return 0;
}
