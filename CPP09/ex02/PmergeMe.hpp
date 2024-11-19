#ifndef __PMERGEME__
# define __PMERGEME__

#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include <ctime>
#include <algorithm>
#include <vector>
#include <deque>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */

bool is_digits(const std::string &str);
void checkInput(int argc, char *argv[]);
void printArray(std::vector<int> &vect);
void mergeSortVector(std::vector<int> &vect);
void mergeSortDeque(std::deque<int> &deque);

template<typename T>
void printContainer(T &container)
{
    typename T::iterator it = container.begin();
    for (; it != container.end(); ++it) {
        std::cout << *it << std::endl;
    }
}

#endif