#include "BitcoinExchange.hpp"

const std::map<std::string, float> ParseCsvFile(void)
{
    std::map<std::string, float> mapData;
    std::ifstream data;
    std::string line;

    data.open("data.csv");
    if (!data.is_open()) {
        std::cerr << RED << "Error: Could not open data.csv" << RESET << std::endl;
        exit(1);
    }
    getline(data, line); // PASS THE FIRST LINE
    while (getline(data, line))
    {
        std::size_t comma = line.find(',');
        std::string date = line.substr(0, comma);
        std::string value_str = line.substr(comma + 1);
        float value = std::atof(value_str.c_str());

        mapData[date] = value;
    }
    data.close();
    return mapData;
}

bool ValidDate(std::string date)
{
    std::string newDate_str = date;
    newDate_str.erase(4, 1);
    newDate_str.erase(6, 1);

    int year = std::atoi(date.substr(0, 3).c_str());
    int month = std::atoi(date.substr(5, 6).c_str());
    int day = std::atoi(date.substr(8, 9).c_str());
    int newDate = std::atoi(newDate_str.c_str());

    if (day < 1)
        return false;
    if (newDate < 20090102)
        return false;
    if (date.c_str()[4] != '-' || date.c_str()[7] != '-' || date.c_str()[10] != ' ' || date.c_str()[12] != ' ')
        return false;
    if (month > 12 || month < 1)
        return false;
    if (month == 2 && year % 4 == 0 && day > 29)
        return false;
    if (month == 2 && year % 4 != 0 && day > 28)
        return false;
    if (month != 2 && month % 2 == 0 && day > 30)
        return false;
    if (month != 2 && month % 2 != 0 && day > 31)
        return false;
    return true;
}

int TransformFormat(std::string date_str)
{
    std::string newDate_str = date_str;
    newDate_str.erase(4, 1);
    newDate_str.erase(6, 1);
    return (std::atoi(newDate_str.c_str()));
}

void FindValues(std::map<std::string, float> FirstMap, char *input)
{
    std::ifstream file;
    std::string line;

    file.open(input);
    if (!file.is_open()) {
        std::cerr << RED << "Error: Could not open input file" << RESET << std::endl;
        exit(1);
    }

    getline(file, line);
    while (getline(file, line))
    {
        std::size_t pipe_pos = line.find('|');
        std::string date = line.substr(0, pipe_pos - 1);
        // std::cout << GREEN << FirstMap["2011-01-03"] << RESET << std::endl;
        if (pipe_pos == std::string::npos) {
            std::cout << RED << "Error: pipe is missing or at the wrong place" << RESET << std::endl;
            continue;
        }
        if (pipe_pos != 11 || line.c_str()[12] != ' ') {
            std::cout << RED << "Error: pipe is missing or at the wrong place" << RESET << std::endl;
            continue;
        }

        std::string value_str = line.substr(pipe_pos + 2);
        double value = std::atof(value_str.c_str());

        if (!ValidDate(line)) {
            std::cout << RED << "Error: format date is wrong" << RESET << std::endl;
            continue;
        }
        if (value > 1000.0f || value < 0.0f) {
            std::cout << RED << "Error: value is too small or too big" << RESET << std::endl;
            continue;
        }

        int tmpDate = TransformFormat(date);

        for (std::map<std::string, float>::iterator firstIt = FirstMap.begin(); firstIt != FirstMap.end(); ++firstIt) {
            int firstDate = TransformFormat(firstIt->first);

            if (tmpDate == firstDate) {
                std::cout << date << " => " << value << " = " << (value * firstIt->second) << std::endl;
                tmpDate = 0;
                break;
            }
            else if (tmpDate < firstDate && static_cast<float>(tmpDate) > value) {
                tmpDate = firstDate;
            }

            switch (static_cast<int>(value)) {
                case 1001:
                    std::cout << RED << "Error: pipe is missing or at the wrong place" << RESET << std::endl;
                    tmpDate = 0;
                    break;
                case 1002:
                    std::cout << RED << "Error: value is too small or too big" << RESET << std::endl;
                    tmpDate = 0;
                    break;
                case 1003:
                    std::cout << RED << "Error: format date is wrong" << RESET << std::endl;
                    tmpDate = 0;
                    break;
            }

            if (tmpDate == 0) break;
        }
        if (tmpDate != 0) {
            std::cout << date << " => " << value << " = " << /* HEREEE */ << std::endl;  // FIND WAY TO ACCESS MAP VALUE
        }
    }
    file.close();
}


/*  ERROR INPUT
*       ERROR PIPE : 1001
*       ERROR SIZE VALUE : 1002
*       ERROR BAD DATE : 1003
*/


