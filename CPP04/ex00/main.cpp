#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    const WrongAnimal *wAnim = new WrongAnimal();
    const WrongAnimal *wCat = new WrongCat();

    std::cout << "---------------------------------" << std::endl;

    std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << wAnim->getType() << " " << std::endl;
    std::cout << wCat->getType() << " " << std::endl;

    std::cout << "---------------------------------" << std::endl;

    meta->makeSound();
    i->makeSound();
    j->makeSound();
    wAnim->makeSound();
    wCat->makeSound();

    std::cout << "---------------------------------" << std::endl;
    
    delete meta;
    delete j;
    delete i;
    delete wAnim;
    delete wCat;
    
    return 0;
}