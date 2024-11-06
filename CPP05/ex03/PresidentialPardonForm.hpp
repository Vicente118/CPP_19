#ifndef __PRESIDENTIALPARDONFORM__
# define __PRESIDENTIALPARDONFORM__

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private :
        const std::string target;
        PresidentialPardonForm();
    
    public :
        PresidentialPardonForm(const std::string target);
        PresidentialPardonForm(const PresidentialPardonForm& ref);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& ref);
        ~PresidentialPardonForm();

        virtual void execute(Bureaucrat const & executor) const;
};

#endif