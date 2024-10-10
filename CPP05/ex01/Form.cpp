#include "Form.hpp"

Form::Form() : gradeToSign(0), gradeToExecute(0) {}

Form::Form(const std::string name, const u_int gradeToSign, const u_int gradeToExecute)
: name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    if (this->gradeToExecute < 1 || this->gradeToSign < 1)
        throw GradeTooHighException();
    else if (this->gradeToSign > 150 || this->gradeToExecute > 150)
        throw GradeTooLowException();
}

Form::Form(const Form& formREF)
: name(formREF.name), isSigned(formREF.isSigned), gradeToSign(formREF.gradeToSign), gradeToExecute(formREF.gradeToExecute) {}

Form& Form::operator=(const Form& formREF) {
    if (this != &formREF)
    {
        this->isSigned = formREF.isSigned;
    }
    return *this;
}

Form::~Form() {}

std::ostream& operator<<(std::ostream& out, const Form& formREF) {
    out << "Name: " << formREF.getName() << "\nIs signed: " << formREF.getIsSigned()
        << "\nGrade to sign: " << formREF.getGradeToSign() << "\nGrade to execute: "
        << formREF.getGradeToExecute() << std::endl;
    return out;
}

const std::string Form::getName() const { return this->name; }

bool Form::getIsSigned() const { return this->isSigned; }

const u_int Form::getGradeToSign() const { return this->gradeToSign; }

const u_int Form::getGradeToExecute() const { return this->gradeToExecute; }

void Form::beSigned(const Bureaucrat& bureaucratREF) {
    if (bureaucratREF.getGrade() <= this->gradeToSign)
    {
        this->isSigned == true;
        std::cout << bureaucratREF.getName() << " signed " << this->name << std::endl;
    }
    else
        throw Bureaucrat::GradeTooLowException();
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Form grade too low !";
}

const char* Form::GradeTooHighException::what() const throw() {
    return "Form grade too high !";
}
