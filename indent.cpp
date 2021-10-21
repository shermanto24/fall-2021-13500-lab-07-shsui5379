/**
 * Author: Steven Hsui
 * Course: CSCI 135
 * Instructor: Mike Zamansky
 * Assignment: Lab 7 Task B
 * 
 * Adding indentations
 * */

#include <iostream>
#include "indent.h"

/**
 * Counts the number of occurrences of `c` in `line`
 * 
 * @param line  The string to count in
 * @param c  The character to count for
 * @returns  The number of times `c` occurs in `line`
 * */
int countChar(std::string line, char c)
{
    int counter = 0;

    for (int i = 0; i < line.length(); i++)
    {
        if (c == line[i])
        {
            counter++;
        }
    }

    return counter;
}