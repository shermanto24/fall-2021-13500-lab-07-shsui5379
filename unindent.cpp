/**
 * Author: Steven Hsui
 * Course: CSCI 135
 * Instructor: Mike Zamansky
 * Assignment: Lab 7 Task A
 * 
 * Removing indentations
 * */

#include <iostream>
#include <cctype>
#include "unindent.h"

/**
 * Removes leading spaces from a given line
 * 
 * @param line  The input line
 * @returns  `line` without the leading spaces
 * */
std::string removeLeadingSpaces(std::string line)
{
    int startPosition = 0;

    while (startPosition < line.length() && isspace(line[startPosition]))
    {
        startPosition++;
    }

    return line.substr(startPosition);
}