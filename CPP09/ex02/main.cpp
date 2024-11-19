#include "PmergeMe.hpp"

int main(int argc, char *argv[])
{
    checkInput(argc, argv);
    /// VECTOR ///
    clock_t start = clock();
    std::vector<int> vect;
    for (int i = 1; i < argc; i++) {
        int actual = std::atoi(argv[i]);
        if (std::count(vect.begin(), vect.end(), actual) > 0)
            continue;
        vect.push_back(actual);
    }

    std::cout << "Before:  ";
    printArray(vect);

    mergeSortVector(vect);
    clock_t end = clock();
    std::cout << "After:  ";
    printArray(vect);
    double time = static_cast<double>(end - start);
    std::cout << "Time to process a range of " << vect.size() << " elements with std::vector : " << time << " microseconds" << std::endl;

    /// DEQUE ///
    clock_t start2 = clock();
    std::deque<int> deq;
    for (int i = 1; i < argc; i++) {
        int actual = std::atoi(argv[i]);
        if (std::count(deq.begin(), deq.end(), actual) > 0)
            continue;
        deq.push_back(actual);
    }
    mergeSortDeque(deq);
    clock_t end2 = clock();
    double time2 = static_cast<double>(end2 - start2);
    std::cout << "Time to process a range of " << deq.size() << " elements with std::deque : " << time2 << " microseconds" << std::endl;
    printContainer(vect);
    printContainer(deq);
    return 0;
}

bool is_digits(const std::string &str)
{
    return str.find_first_not_of("0123456789") == std::string::npos;
}

void checkInput(int argc, char *argv[])
{
    if (argc < 2) {
        std::cerr << "Error: Not enough argument" << std::endl;
        exit(1);
    }
    for (int i = 1; i < argc; i++) {
        std::string s(argv[i]);
        if (is_digits(s) == false) {
            std::cerr << "Error: please enter positive digits" << std::endl;
            exit(1);
        }
        if (std::atof(argv[i]) > std::numeric_limits<int>::max()) {
            std::cerr << "Error: please enter an integer" << std::endl;
            exit(1);
        }
    }
}

