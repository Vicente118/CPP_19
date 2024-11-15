#include "BitcoinExchange.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2) {
        std::cerr << "Error: please enter 1 argument" << std::endl;
        exit (1);
    }

    const std::map<std::string, float> mapData = ParseCsvFile();

    FindValues(mapData, argv[1]);


    return 0;
}