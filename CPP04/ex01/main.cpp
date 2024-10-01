#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
int main()
{
	const Animal	*meta[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
		{
			meta[i] = new Cat();
			if (meta[i] == nullptr)
			{
				std::cerr << "Error memory allocation";
				exit(1);
			}
		}
		else
		{
			meta[i] = new Dog();
			if (meta[i] == nullptr)
			{
				std::cerr << "Error memory allocation";
				exit(1);
			}
		}
	}
	std::cout << "------------------------------------------" << std::endl;

	for (int i = 0; i < 10; i++)
	{
		std::cout << std::endl;
		std::cout << "Animal type: " << meta[i]->getType() << std::endl;
		meta[i]->makeSound();
		std::cout << std::endl;
	}
    
	std::cout << "------------------------------------------" << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
		delete(meta[i]);



	std::cout << std::endl << std::endl;
	std::cout << "#### showing that the copy constructor creates a deep copy ####" << std::endl;
	std::cout << std::endl;

	Dog *a = new Dog();
	if (a == nullptr) {
        std::cerr << "Error memory allocation";
        exit(1);
    }

	a->setIdea(0, "I'm hungry");
	a->setIdea(1, "I want to go outside");
	a->setIdea(2, "I want to play with another dog");
	a->setIdea(101, "Other dog thing");

	Dog *b = new Dog(*a);
	if (b == nullptr) {
		std::cerr << "Error memory allocation";
		exit(1);
	}

	std::cout << "\n" << std::endl;

	std::cout << "The " << a->getType() << " a has the following ideas: " << std::endl;
	a->getIdeas();
	std::cout << std::endl;

	std::cout << "\033[34mDeconstructing a\033[0m" << std::endl;
	delete(a);
	std::cout << std::endl;

	std::cout << "\033[34mTesting b\033[0m" << std::endl;
	std::cout << "The " << b->getType() << " b has the following ideas: " << std::endl;
	b->getIdeas();
	std::cout << std::endl;

	std::cout << "\033[34mDeconstructing b\033[0m" << std::endl;
	delete(b);

	return (0);
}