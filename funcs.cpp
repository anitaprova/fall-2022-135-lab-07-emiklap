#include <iostream>
#include <cctype>
#include <string>

/**
 * Removes the leading spaces of a given line
 */
std::string removeLeadingSpaces(std::string line) {
    std::string return_string;
    int counter = 0;
    bool is_leading_space = true;

    while(is_leading_space) {
        if (!isspace(line[counter])) {
            is_leading_space = false;
        } else {
            counter++;
        }
    }

    return_string += line.substr(counter);
    return return_string;
}

/**
 * Counts the number of times a given charatcer is present in a given string
 */
int countChar(std::string line, char c) {
    int counter = 0;

    for (int i = 0; i < line.length(); i++) {
        if (line[i] == c) {
            counter++;
        }
    }
    return counter;
}

/**
 * Adds 1 or more tabs to the beginning of a given string depending on the number specified
 */
std::string addTabs(std::string line, int num_of_tabs) {
    std::string tabs;

    for (int i = 0; i < num_of_tabs; i++) {
        tabs += "\t";
    }

    return tabs + line;
}
