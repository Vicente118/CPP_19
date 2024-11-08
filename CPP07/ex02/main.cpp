#include "Array.hpp"

int main()
{
    /// EMPTY ARRAY ///
    std::cout << "\033[1m\033[34m/// EMPTY ARRAY ///\033[0m" << std::endl;
    Array<int> emptyArray;
    std::cout << emptyArray.size() << std::endl;

    /// ARRAY ///
    std::cout << "\033[1m\033[34m/// ARRAY ///\033[0m" << std::endl;
    Array<int> myArray(5);
    std::cout << myArray.size() << std::endl;
    for (u_int i = 0; i < myArray.size(); i++)
    {
        myArray[i] = (i * 3) + 2;
    }
    std::cout << std::endl;
    
    /// PRINT ARRAY ///
    std::cout << "\033[1m\033[34m/// DISPLAY ARRAY ///\033[0m" << std::endl;
    for (u_int i = 0; i < myArray.size(); i++)
    {
        std::cout << "Array[" << i << "] = " << myArray[i] << std::endl;
    }
    std::cout << std::endl;

    /// DEEP COPY ARRAY
    std::cout << "\033[1m\033[34m/// DEEP COPY ARRAY ///\033[0m" << std::endl;
    Array<int> copyArray(myArray);
    myArray[0] = 1234;
    std::cout << "First array : "<< myArray[0] << std::endl;
    std::cout << "Copy array : "<< copyArray[0] << std::endl;
    std::cout << std::endl;

    /// EXCEPTIONS OUT OF RANGE ///
    std::cout << "\033[1m\033[34m/// OUT OF RANGE EXCEPTION ///\033[0m" << std::endl;
    try {
        std::cout << myArray[10] << std::endl;
    } catch (std::exception& e) {
        std::cout << "Exception : " << e.what() << std::endl;
    }

    return 0;
}