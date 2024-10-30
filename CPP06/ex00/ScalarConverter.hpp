#ifndef __SCALARCONVERTER__
# define __SCALARCONVERTER__

# include <iostream>
# include <string>

class ScalarConverter
{
    private :
        ScalarConverter();
    public :
        ScalarConverter(const ScalarConverter& ref);
        ScalarConverter& operator=(const ScalarConverter& ref);
        ~ScalarConverter();
        
        static void convert(std::string input);
};

#endif