#ifndef __AFORM__
# define __AFORM__

# include <iostream>
# include <fstream>
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

    protected :
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
        AForm(const AForm& formREF);
        AForm& operator=(const AForm& formREF);
        ~AForm();

        const std::string getName() const;
        bool getIsSigned() const;
        const u_int getGradeToSign() const;
        const u_int getGradeToExecute() const;

        void beSigned(const Bureaucrat& bureaucratRef);

        virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream&   operator<<(std::ostream& out, const AForm& ref);

#endif