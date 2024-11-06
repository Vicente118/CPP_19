#include "ShrubberyCreationForm.hpp"

void drawTree(std::ofstream& file)
{
    file << TREE << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreation", 145, 137), target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& ref) : AForm(ref), target(ref.target) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& ref) {
    if (this != &ref) {
        AForm::operator=(ref);
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const 
{
    if (!this->getIsSigned()) {
        throw std::runtime_error("Form is not signed");
    }
    if (executor.getGrade() > this->getGradeToExecute()) {
        throw GradeTooLowException();
    }
    std::ofstream file((this->target) + "_shrubbery");
    if (file.is_open() == false) {
        std::cout << "Error while opening file" <<std::endl;
        exit(1);
    }
    drawTree(file);
    file.close();
}