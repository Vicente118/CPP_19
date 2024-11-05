#include "iter.hpp"


void divide(int *number) {
    *number = *number / 2;
}

void printArray(int *array)
{
    for (int i = 0; i < 10; i++) {
        std::cout << "[" << array[i] << "] ";
    }
    std::cout << std::endl;
}

int main()
{
    int array[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    
    printArray(array);
    ::iter(array, 10, &divide);
    printArray(array);

    return 0;
}