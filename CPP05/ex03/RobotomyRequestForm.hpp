#ifndef __ROBOTOMYREQUESTFORM__
# define __ROBOTOMYREQUESTFORM__

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private :
        const std::string target;
        RobotomyRequestForm();
    public :
        RobotomyRequestForm(const std::string target);
        RobotomyRequestForm(const RobotomyRequestForm& ref);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& ref);
        ~RobotomyRequestForm();

        virtual void execute(Bureaucrat const & executor) const;
};

#endif