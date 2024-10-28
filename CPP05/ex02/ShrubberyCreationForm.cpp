#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreation", 145, 137), target(target) 
{
    std::ofstream file;
    if (file.is_open() == false) {
        std::cout << "Error while opening file" <<std::endl;
        exit(1);
    }
}

