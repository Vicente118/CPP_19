#include "AForm.hpp"

AForm::AForm() : gradeToSign(0), gradeToExecute(0) {}

AForm::AForm(const std::string name, const u_int gradeToSign, const u_int gradeToExecute)
: name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    if (this->gradeToExecute < 1 || this->gradeToSign < 1)
        throw GradeTooHighException();
    else if (this->gradeToSign > 150 || this->gradeToExecute > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm& formREF)
: name(formREF.name), isSigned(formREF.isSigned), gradeToSign(formREF.gradeToSign), gradeToExecute(formREF.gradeToExecute) {}

AForm& AForm::operator=(const AForm& formREF) {
    if (this != &formREF)
    {
        this->isSigned = formREF.isSigned;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& out, const AForm& formREF) {
    out << "Name: " << formREF.getName() << "\nIs signed: " << formREF.getIsSigned()
        << "\nGrade to sign: " << formREF.getGradeToSign() << "\nGrade to execute: "
        << formREF.getGradeToExecute() << std::endl;
    return out;
}

const std::string AForm::getName() const { return this->name; }

bool AForm::getIsSigned() const { return this->isSigned; }

const u_int AForm::getGradeToSign() const { return this->gradeToSign; }

const u_int AForm::getGradeToExecute() const { return this->gradeToExecute; }

void AForm::beSigned(const Bureaucrat& bureaucratREF) {
    if (bureaucratREF.getGrade() <= this->gradeToSign)
    {
        this->isSigned == true;
        std::cout << bureaucratREF.getName() << " signed " << this->name << std::endl;
    }
    else
        throw Bureaucrat::GradeTooLowException();
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "AForm grade too low !";
}

const char* AForm::GradeTooHighException::what() const throw() {
    return "AForm grade too high !";
}
