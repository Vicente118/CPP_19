#ifndef __SPAN__
# define __SPAN__

#include <iostream>
#include <string>
#include <limits>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>
#include <cmath> 
#include <ctime>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

typedef unsigned int uint;

class Span
{
    private :
        std::vector<uint> vect;
        uint maxSize;
        Span();
    public :
        Span(uint N);
        Span(const Span& ref);
        Span& operator=(const Span &ref);
        ~Span();

        void addNumber(uint number);
        void addNumber(std::vector<uint>::iterator begin, std::vector<uint>::iterator end);
        uint shortestSpan();
        uint longestSpan();

        void printVect();
};

#endif