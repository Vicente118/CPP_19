#ifndef __BUREAUCRAT__
# define __BUREAUCRAT__

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat
{
    private :
        const std::string name;
        u_int grade;
    
        Bureaucrat();

    public :
        class GradeTooLowException : public std::exception 
        {
			virtual const char* what() const throw();
		};
        class GradeTooHighException : public std::exception {
			virtual const char*	what() const throw();
		};

        Bureaucrat(u_int grade, std::string name);
        Bureaucrat(const Bureaucrat& ref);
        Bureaucrat& operator=(const Bureaucrat& ref);
        ~Bureaucrat();

        const std::string getName() const;
        u_int getGrade() const;
        
        void incrementGrade();
        void decrementGrade();

        void signForm(Form& formREF) const ;
};

std::ostream&   operator<<(std::ostream& out, const Bureaucrat& ref);

#endif