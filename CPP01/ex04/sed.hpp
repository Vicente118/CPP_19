#pragma once
#ifndef __SED__
#define __SED__

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cstddef>

bool    checkArgs(int argc, char **argv);
void    replaceString(char **argv, std::ifstream& infile, std::ofstream& outfile);


#endif