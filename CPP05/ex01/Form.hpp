#ifndef __FORM__
# define __FORM__

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private :
        const std::string name;
        bool isSigned;
        const u_int gradeToSign;
        const u_int gradeToExecute;

        Form();
    public :
        class GradeTooLowException : public std::exception
        {
            virtual const char* what() const throw();
        };
        class GradeTooHighException : public std::exception
        {
            virtual const char* what() const throw();
        };

        Form(const std::string name, const u_int gradeToSign, const u_int gradeToExecute);
        Form(const Form& formREF);
        Form& operator=(const Form& formREF);
        ~Form();

        const std::string getName() const;
        bool getIsSigned() const;
        const u_int getGradeToSign() const;
        const u_int getGradeToExecute() const;

        void beSigned(const Bureaucrat& bureaucratRef);
};

std::ostream&   operator<<(std::ostream& out, const Form& ref);

#endif