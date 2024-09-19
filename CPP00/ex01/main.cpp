#include "phonebook.hpp"

int main()
{
    PhoneBook Directory;
    std::string str;
    int nb_contact = 0;

    str = "";
    std::cout << "Welcome to the PhoneBook program, choose a command between ADD, SEARCH and EXIT \n" << std::endl; 
    while (str != "EXIT")
    {
        std::cout << "COMMAND > ";
        getline(std::cin, str);
        eof_sig();
        if (str == "EXIT")
            continue;
        else if (str == "ADD")
        {
            Directory.addContact();
            if (nb_contact < 8)
                nb_contact++;
        }
        else if (str == "SEARCH")
        {
            int i = 0;
            if (nb_contact > 0)
                std::cout << std::endl;
            while (i < nb_contact)
            {
                Directory.displayContact(Directory.getContact(i), i);
                i++;
            }
            if (i > 0)
            {
                std::cout << "\nEnter the number of the contact you want to see informations\n> ";
                getline(std::cin, str);
                eof_sig();
                if (str.size() == 1 && str[0] - 48 >= 0 && str[0] - 48 <= nb_contact - 1)
                    Directory.displayInfo(str);
                else
                    std::cout << "Please enter a valid number" << std::endl;
                std::cout << std::endl;
            }
        }
    }

    return 0;
}