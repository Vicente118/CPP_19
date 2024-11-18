#include "RPN.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2) {
        std::cerr << "Error: wrong number of argument" << std::endl;
        return 1;
    }
    calculation(argv[1]);
    return 0;
}