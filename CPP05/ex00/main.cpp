#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

int main()
{
    std::cout << "------------------------" << std::endl;
    std::cout << "INITIALISATION TRY CATCH" << std::endl;
    std::cout << "------------------------\n" << std::endl;

    try {
		Bureaucrat b1(1, "b1");
		std::cout << b1;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
    std::cout << "\n" << std::endl;
    try {
        Bureaucrat b2(151, "b2");
        std::cout << b2;
    }
    catch (std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }


    std::cout << std::endl;
    std::cout << "-----------------------------" << std::endl;
    std::cout << "INCREMENT DECREMENT TRY CATCH" << std::endl;
    std::cout << "-----------------------------\n" << std::endl;

    Bureaucrat b3(149, "b3");
    try {
        b3.decrementGrade();
        std::cout << b3 << std::endl;
    }
    catch(std::exception& e) {
        std::cout << "Error : " << e.what() << std::endl;
    }
    std::cout << std::endl;
    try {
        b3.decrementGrade();
        std::cout << b3 << std::endl;
    }
    catch(std::exception& e) {
        std::cout << "Error : " << e.what() << std::endl;
    }
    std::cout << std::endl;

    return 0;
}