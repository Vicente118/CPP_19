#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentPardon", 25, 5), target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& ref) : AForm(ref), target(ref.target) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& ref) {
    if (this != &ref) {
        AForm::operator=(ref);
    }
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (!this->getIsSigned()) {
        throw std::runtime_error("Form is not signed");
    }
    if (executor.getGrade() > this->getGradeToExecute()) {
        throw GradeTooLowException();
    }
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;  
}