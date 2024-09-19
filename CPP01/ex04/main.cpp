#include "sed.hpp"

int main(int argc, char **argv)
{
    if (checkArgs(argc, argv) == false)
        return 1;

    std::ifstream infile{argv[1]};
    if (infile.is_open() == false){
        std::cout << "Error : file" << std::endl;
        return 1;
    }
    std::ofstream outfile{static_cast<std::string>(argv[1]) + static_cast<std::string>(".replace")};
    if (outfile.is_open() == false){
        infile.close();
        std::cout << "Error : file" << std::endl;
        return 1;
    }

    replaceString(argv, infile, outfile);
    infile.close();
    outfile.close();

    return 0;
}
