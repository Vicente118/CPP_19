#include <iostream>
#include <string>


int main(int argc, char **argv)
{
    int i = 1;
    int j = 0;
    char c;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    while (i < argc)
    {
        j = 0;
        while (argv[i][j])
        {
            if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
                std::cout << static_cast<char>(std::toupper(argv[i][j]));
            else
                std::cout << argv[i][j];
            j++;
        }
        i++;
    }
    std::cout << std::endl;
    return (0);
}