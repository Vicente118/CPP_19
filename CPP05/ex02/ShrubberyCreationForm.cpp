#include "ShrubberyCreationForm.hpp"

void drawTree(std::ofstream& file)
{
    file << TREE << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreation", 145, 137), target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}


void ShrubberyCreationForm::execute(Bureaucrat const & executor) const 
{
    std::ofstream file((this->target) + "_shrubbery");
    if (file.is_open() == false) {
        std::cout << "Error while opening file" <<std::endl;
        exit(1);
    }
    drawTree(file);
    file.close();
}