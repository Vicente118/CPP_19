#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& ref) {}

Intern& Intern::operator=(const Intern& ref) {
    (void)ref;
    return *this;
}

Intern::~Intern() {}

AForm	*makePresident(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm	*makeRobot(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm	*makeShrubbery(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm* Intern::makeForm(const std::string formName, const std::string target) 
{
    std::string formArray[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    AForm *(*func[])(const std::string target) = {&makePresident, &makeRobot, &makeShrubbery};

    for (int i = 0; i < 3; i++) {
        if (formName == formArray[i]) {
            std::cout << "Intern creates " << formName << std::endl;
            return (func[i](target));
        }
    }
    std::cout << "Form not found" << std::endl;
    return NULL;
}