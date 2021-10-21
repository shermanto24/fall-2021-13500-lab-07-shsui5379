#include <iostream>
#include <fstream>
#include "unindent.h"
#include "indent.h"

int main()
{
    std::ifstream infile("bad-code.cpp");
    std::ofstream outfile("bad-code FORMATTED.cpp");

    std::string line;
    int numberOfSpaces = 0;

    while (getline(infile, line))
    {
        line = removeLeadingSpaces(line);
        numberOfSpaces -= countChar(line, '}');
        line = addLeadingSpaces(line, numberOfSpaces);
        numberOfSpaces += countChar(line, '{');
        outfile << line << std::endl;
    }

    return 0;
}