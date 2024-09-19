#include "sed.hpp"

bool    checkArgs(int argc, char **argv)
{
    if (argc != 4) {
        std::cout << "Wrong number of arguments" << std::endl;
        return false;
    }
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    if (s1.empty() || s2.empty()){
        std::cout << "Empty string" << std::endl;
        return false;
    }
    return true;
}

void    replaceString(char **argv, std::ifstream& infile, std::ofstream& outfile)
{
    std::string line;
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    while (std::getline(infile, line))
    {
        unsigned int cursor = 0;

        while((cursor = line.find(s1, cursor)) != -1)
        {
            line.erase(cursor, s1.size());
            line.insert(cursor, s2);
            cursor += s2.size();
        }
        outfile << line << std::endl;    
    }
}