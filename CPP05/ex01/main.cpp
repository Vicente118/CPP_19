#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat bu(80, "Bu");
    Form form("Form", 100, 100);
    Form form0("Form0", 70, 70);
    try {
        Form form1("Form1", 20, 20);
        Form form2("Form2", 156, 140); // EXCEPTION
    }
    catch(std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    std::cout << "--------------------------------------------------" << std::endl;
    try {
        form.beSigned(bu);
        form0.beSigned(bu); // Exception
    }
    catch(std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    std::cout << "--------------------------------------------------" << std::endl;

    bu.signForm(form);
    bu.signForm(form0);
    
    std::cout << "--------------------------------------------------" << std::endl;
    std::cout << "Overload = operator of Bureaucrat: \n" << bu << "\n" <<  std::endl;
    std::cout << "Overload = operator of Form: \n" << form << std::endl;

    return 0;
}