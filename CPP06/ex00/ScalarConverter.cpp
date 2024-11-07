#include "ScalarConverter.hpp"

#define DOUBLE_PRECISION 3

void ScalarConverter::convert(std::string input)
{
    char charValue;
    int intValue;
    double doubleValue;
    float floatValue;

    try {
        doubleValue = std::atof(input.c_str());
    } catch (std::invalid_argument&) {
        std::cout << "Error : invalid argument" << std::endl;
        return;
    } catch (std::out_of_range&) {
        std::cout << "Error : out of range" << std::endl;
        return;
    }
    for (long unsigned int i = 0; i < input.length() - 1; i++) {
        if (input[i] == 46 && (input[i + 1] < 48 || input[i + 1] > 57) && (input[i + 1]) != 'f') {
            std::cout << "Error : invalid argument" << std::endl;
            return;
        }
        if ((input[i] >= 48 && input[i] <= 57) && (((input[i + 1] < 48 || input[i + 1] > 57) && input[i + 1] != 46))) 
        {
            if ((i == input.length() - 2) && input[i + 1] == 'f')
                break;
            std::cout << "Error : invalid argument" << std::endl;
            return;
        }
    }
    // toChar
    if (doubleValue >= 0 && doubleValue <= std::numeric_limits<char>::max() && std::isprint(static_cast<char>(doubleValue)))
    {
        charValue = static_cast<char>(doubleValue);
        std::cout << "char: '" << charValue << "'" << std::endl;
    } 
    else if (doubleValue >= 0 && doubleValue <= std::numeric_limits<char>::max()) {
        std::cout << "char: Non displayable" << std::endl;
    } 
    else {
        std::cout << "char: impossible" << std::endl;
    }

    // toInt
    if (doubleValue >= std::numeric_limits<int>::min() && doubleValue <= std::numeric_limits<int>::max())
    {
        intValue = static_cast<int>(doubleValue);
        std::cout << "int: " << intValue << std::endl;
    }
    else {
        std::cout << "int: impossible" << std::endl;
    }

    // toFloat
    if (doubleValue >= -std::numeric_limits<float>::max() && doubleValue <= std::numeric_limits<float>::max())
    {
        floatValue = static_cast<float>(doubleValue);
        if (doubleValue - floatValue == 0.0f) 
            std::cout << "float: " << floatValue << ".0f" << std::endl;
        else
            std::cout << "float: " << floatValue << "f" << std::endl;
    }
    else {
        std::cout << "float: nanf" << std::endl;
    }

    //toDouble
    if (doubleValue >= -std::numeric_limits<double>::max() && doubleValue <= std::numeric_limits<double>::max())
    {
        std::cout << std::fixed << std::setprecision(DOUBLE_PRECISION);
        std::cout << "double: " << doubleValue << std::endl;

    }
    else {
        std::cout << "double: nan" << std::endl;
    }
}