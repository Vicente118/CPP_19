#include "ShrubberyCreationForm.hpp"

int main()
{
    Bureaucrat Bur(17, "Bur");
    ShrubberyCreationForm Form("file");

    Form.execute(Bur);

    return 0;
}