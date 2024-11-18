#ifndef __RPN__
# define __RPN__

#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include <ctime>
#include <algorithm>
#include <stack>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */

void calculation(const std::string &expression);




#endif