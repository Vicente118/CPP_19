#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(u_int grade, std::string name) : grade(grade), name(name) {
    if (grade > 150) {
        throw GradeTooLowException();
    }
    else if (grade < 1) {
        throw GradeTooHighException();
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat& ref) : grade(ref.grade), name(ref.name) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& ref) {
    if (this != &ref) {
        this->grade = ref.grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {}

const std::string Bureaucrat::getName() const { return this->name; }

u_int Bureaucrat::getGrade() const { return this->grade; }

std::ostream& operator<<(std::ostream& out, const Bureaucrat& ref) {
    out << ref.getName() <<", bureaucrat grade " << ref.getGrade() << ".";
    return out;
}

void Bureaucrat::incrementGrade() {
    if (this->grade - 1 < 1)
        throw GradeTooLowException();
    this->grade -= 1;
}

void Bureaucrat::decrementGrade() {
    if (this->grade + 1 > 150)
        throw GradeTooHighException();
    this->grade += 1;
}

void Bureaucrat::signForm(Form& formREF) const {
    try {
        formREF.beSigned(*this);
    }
    catch(std::exception& e) {
        std::cout << this->name << " couldn't sign " << formREF.getName() << " because " << e.what() << std::endl;
    }
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Bureaucrat grade too low !";
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Bureaucrat grade too high !";
}