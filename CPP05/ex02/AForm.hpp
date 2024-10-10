#ifndef __FORM__
# define __FORM__

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private :
        const std::string name;
        bool isSigned;
        const u_int gradeToSign;
        const u_int gradeToExecute;

        AForm();
    public :
        class GradeTooLowException : public std::exception
        {
            virtual const char* what() const throw();
        };
        class GradeTooHighException : public std::exception
        {
            virtual const char* what() const throw();
        };

        AForm(const std::string name, const u_int gradeToSign, const u_int gradeToExecute);
        AForm(const Form& formREF);
        AForm& operator=(const Form& formREF);
        virtual ~AForm() = 0;

        virtual const std::string getName() const;
        virtual bool getIsSigned() const;
        virtual const u_int getGradeToSign() const;
        virtual const u_int getGradeToExecute() const;

        virtual void beSigned(const Bureaucrat& bureaucratRef);
};

std::ostream&   operator<<(std::ostream& out, const Form& ref);

#endif