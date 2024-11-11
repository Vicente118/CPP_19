#include "Span.cpp"

#define SIZE 10000

void test(Span span, int size)
{
    std::srand(static_cast<unsigned int>(std::time(0)));

    for (int i = 0; i < size; i++)
    {
        int j = std::rand() / 1000000;
        try {
            span.addNumber(j);
            std::cout << "Number " << (j) << " added successfully !" << std::endl;
        } catch (const std::exception &e) {
            std::cout << RED << e.what() << RESET << std::endl;
        }
    }
    try {
        std::cout << YELLOW << "Shortest span: " << span.shortestSpan() << RESET << std::endl;
    } catch (const std::exception &e) {
        std::cout << RED << e.what() << RESET << std::endl;
    }

    try {
        std::cout << YELLOW << "Longest span: " << span.longestSpan() << RESET << std::endl;
    } catch(const std::exception &e) {
        std::cout << RED << e.what() << RESET << std::endl;
    }
}

int main()
{
    Span span(SIZE);
    Span span2(10);

    std::cout << GREEN << "///// TEST //////" << RESET << std::endl;
    test(span, SIZE);
    std::cout << GREEN << "///// TEST //////" << RESET << std::endl;
    test(span, 10);

    return 0;
}