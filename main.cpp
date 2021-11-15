#include <iostream>
#include <fstream>
#include "unindent.h"
#include "indent.h"

void format(std::string filename);

int main()
{
    format("bad-code.cpp");
    format("bad-code-2.cpp");

    return 0;
}

//this function formats the file passed
//the parameter expects the name of a file
//that exists in the working directory
void format(std::string filename)
{
    std::ifstream infile(filename);
    std::ofstream outfile("FORMATTED - " + filename);

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
}
