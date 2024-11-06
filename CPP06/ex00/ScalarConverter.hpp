#ifndef __SCALARCONVERTER__
# define __SCALARCONVERTER__

# include <iostream>
# include <string>
# include <limits>
# include <cstdlib>
# include <cmath>
# include <iomanip>

class ScalarConverter
{
    private :
        ScalarConverter();
        ScalarConverter(const ScalarConverter& ref);
        ScalarConverter& operator=(const ScalarConverter& ref);
        ~ScalarConverter();

    public :
        static void convert(std::string input);
};

#endif