#include "easyfind.hpp"


int main()
{
    std::cout << YELLOW << "------------VECTOR------------\n" << RESET <<std::endl;
    std::vector<int> vect;
    for (int i = 0; i < 10; i++) {
        vect.push_back(i + 1);
    }
    try {
        std::vector<int>::iterator it = easyfind(vect, 5);
        std::cout << *it << std::endl;
    } catch (...) {
        std::cout << "Error : occurrence not found" << std::endl;
    }

    std::cout << YELLOW << "\n------------LIST------------\n" << RESET << std::endl;

    std::list<int> list;
    for (int i = 0; i < 10; i++) {
        list.push_back(i);
    }
    int i = 5;
    while (i < 15) {
        try {
            std::list<int>::iterator it = easyfind(list, i);
            std::cout << *it << std::endl;
        } catch (...) {
            std::cout << "Error : occurrence not found" << std::endl;
        }
        i++;
    }
}