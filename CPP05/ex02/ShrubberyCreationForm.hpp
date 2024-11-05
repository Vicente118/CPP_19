#ifndef __SHRUBBERYCREATIONFORM__
# define __SHRUBBERYCREATIONFORM__

# include <iostream>
# include <string>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private :
        
        ShrubberyCreationForm();
        
    public :
        class GradeTooLowException : public std::exception
        {
            virtual const char* what() const throw();
        };
        class GradeTooHighException : public std::exception
        {
            virtual const char* what() const throw();
        };
        ShrubberyCreationForm(const ShrubberyCreationForm& ref);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& ref);
};

void drawTree();

#endif