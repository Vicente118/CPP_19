#ifndef __INTERN__
# define __INTERN__

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public :
        Intern();
        Intern(const Intern& ref);
        Intern& operator=(const Intern& ref);
        ~Intern();

        AForm *makeForm(const std::string formName,const std::string target);    
};


#endif