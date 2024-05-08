#include <iostream>

// Characters are used to represent text
int main() {
    // a character is enclosed in single quotes
    char c = 'a';

    // we can use the sizeof operator to determine the size of a variable
    // the size of a char is 1 byte
    std::cout << "Size of char: " << sizeof(char) << " bytes" << std::endl;

    // the integer value of a character can be obtained using the ASCII table
    // the ASCII value of 'a' is 97
    std::cout << "ASCII value of 'a': " << int(c) << std::endl;
    char c1 = 97;

    // special case is escape sequences
    // escape sequences are used to represent special characters
    // they are preceded by a backslash
    // '\n' represents a newline character
    // '\t' represents a tab character
    // '\\' represents a backslash character
    // '\'' represents a single quote character
    // '\"' represents a double quote character
    // '\0' represents a null character
    char newline = '\n';
}
