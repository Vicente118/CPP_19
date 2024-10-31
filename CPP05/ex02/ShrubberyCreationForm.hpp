#ifndef __SHRUBBERY__
# define __SHRUBBERY__

# include "AForm.hpp"

# define TREE "                          ccee88oo\n\
                    C8O8O8Q8PoOb o8oo\n\
                    dOB69QO8PdUOpugoO9bD\n\
                    CgggbU8OU qOp qOdoUOdcb\n\
                        6OuU   p u gcoUodpP\n\
                           douUP\n\
                            |||||\n\
                            |||||\n\
                            |||||\n\
                       .....|||||....."
    

class ShrubberyCreationForm : public AForm
{
    private :
        const std::string target;

        ShrubberyCreationForm();
    public :
        ShrubberyCreationForm(const std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm& ref);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& ref);
        ~ShrubberyCreationForm();
        
        virtual void execute(Bureaucrat const & executor) const;
};

void    drawTree(std::ofstream& file);


#endif