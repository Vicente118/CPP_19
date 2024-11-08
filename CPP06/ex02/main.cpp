#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#define N 5
#define GREEN "\033[32m"
#define RED   "\033[31m" 

Base* generate(void) 
{
    std::srand(static_cast<unsigned int>(std::time(0)));

    Base *base;
    int i = std::rand() % 3 + 1;
    switch (i)
    {
        case 1 :
            std::cout << "A has been randomly generated" << std::endl;
            base = new A;
            break;
        case 2 :
            std::cout << "B has been randomly generated" << std::endl;
            base = new B;
            break;
        case 3 :
            std::cout << "C has been randomly generated" << std::endl;
            base = new C;
    }
    return base;
}

void identify(Base* p) {
    if (dynamic_cast<A *>(p))
        std::cout << "\033[32mThe pointer store the address of a A instance" << std::endl;
    if (dynamic_cast<B *>(p))
        std::cout << "\033[32mThe pointer store the address of a B instance" << std::endl;
    if (dynamic_cast<C *>(p))
        std::cout << "\033[32mThe pointer store the address of a C instance" << std::endl;
}

void identify(Base& p)
{
    try {
        A &a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "\033[31mThe reference p is identified as a A instance" << std::endl;
    } catch (...) {}

    try {
        B &b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "\033[31mThe reference p is identified as a B instance" << std::endl;
    } catch (...) {}

    try {
        C &c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "\033[31mThe reference p is identified as a C instance" << std::endl;
    } catch (...) {}
}

int main()
{
    Base *base[N] = {NULL};
    for (int i = 0; i < N; i++) {
        base[i] = generate();
        usleep(1000000);
    }
    std::cout << std::endl;

    for (int i = 0; i < N; i++){
        identify(base[i]);
    }
    std::cout << std::endl;

    for (int i = 0; i < N; i++) {
        identify(*base[i]);  
    }

    for (int j = N - 1; j >= 0; --j) {
        delete base[j];
    }

    return 0;
}