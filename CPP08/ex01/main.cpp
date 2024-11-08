#include "Span.cpp"

int main()
{
    Span span(10);

    for (int i = 0; i < 11; i++)
    {
        try {
            span.addNumber(i);
            std::cout << "Number " << (i + 100) % 7 << " added successfully !" << std::endl;
        } catch (const std::exception &e) {
            std::cout << RED << e.what() << RESET << std::endl;
        }
    }
}