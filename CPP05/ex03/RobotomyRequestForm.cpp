#include "RobotomyRequestForm.hpp"

bool fifty = true;

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequest", 72, 45), target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& ref) : AForm(ref), target(ref.target) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& ref) {
    if (this != &ref) {
        AForm::operator=(ref);
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (!this->getIsSigned()) {
        throw std::runtime_error("Form is not signed");
    }
    if (executor.getGrade() > this->getGradeToExecute()) {
        throw GradeTooLowException();
    }
    if (fifty == true)
        std::cout << this->target << " has been robotomized successfully" << std::endl;
    else
        std::cout << "Robotomization of " << this->target << " failed" << std::endl;
    fifty = fifty ^ 1;   // XOR operation to invert flag bit (fifty = !fifty; works aswell) 
}