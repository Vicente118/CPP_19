#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
    currentIndex = 0;
    return;
}

void PhoneBook::addContact(void)
{
    // if index > 7 CASE
    std::string input;

    input = "";
    std::cout << "\nNew contact please enter the informations" << std::endl;

    //First Name
    std::cout << "First Name : ";
    getline(std::cin, input);
    eof_sig();
    this->arrayContact[this->currentIndex % 8].setFirstName(input);
    
    //Last Name
    std::cout << "Last Name : ";
    getline(std::cin, input);
    eof_sig();
    this->arrayContact[this->currentIndex % 8].setLastName(input);

    //Nick Name
    std::cout << "Nick Name : ";
    getline(std::cin, input);
    eof_sig();
    this->arrayContact[this->currentIndex % 8].setNickName(input);

    //Phone Number
    std::cout << "Phone Number : ";
    getline(std::cin, input);
    eof_sig();
    this->arrayContact[this->currentIndex % 8].setPhoneNumber(input);

    //Darkest Secret
    std::cout << "Darkest Secret : ";
    getline(std::cin, input);
    eof_sig();
    this->arrayContact[this->currentIndex % 8].setDarkestSecret(input);

    std::cout << "New contact added !\n" << std::endl;
    this->currentIndex++;
}

void    PhoneBook::displayContact(Contact _Contact, int i)
{
    std::cout << i;
    for (int k = 0; k < 3; k++)
    {
        std::cout << "|";
        if (k == 0)
            displayWord(_Contact.getFirstName());
        if (k == 1)
            displayWord(_Contact.getLastName());
        if (k == 2)
            displayWord(_Contact.getNickName());
    }
    std::cout << std::endl;
}

Contact PhoneBook::getContact(int index)
{
    return (arrayContact[index]);
}

void PhoneBook::displayInfo(std::string str)
{
    std::cout << "First name : " << this->getContact(str[0] - 48).getFirstName() << std::endl;
    std::cout << "Last name : " << this->getContact(str[0] - 48).getLastName() << std::endl;
    std::cout << "Nickname : " << this->getContact(str[0] - 48).getNickName() << std::endl;
    std::cout << "Phone number : " << this->getContact(str[0] - 48).getPhoneNumber() << std::endl;
    std::cout << "Darkest secret : " << this->getContact(str[0] - 48).getDarkestSecret() << std::endl;
}