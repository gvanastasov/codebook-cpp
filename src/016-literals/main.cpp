#include <iostream>

// Literals are used to represent fixed values in code
// Literals are used to represent numbers, characters, strings, and boolean values
// There are several types of literals: 
//      - integer literals
//      - floating-point literals
//      - character literals
//      - string literals
//      - boolean literals
int main() {
    // true is boolean literal
    bool b = true;

    // 5 is integer literal
    int x = 5;

    // 3.14 is floating-point literal
    double y = 3.14;

    // 'a' is character literal
    char c = 'a';

    // "abc" is string literal
    // string literals are enclosed in double quotes
    // string literals are null-terminated (a null character '\0' is added at the end)
    // string literals are stored in read-only memory
    // string literals are immutable
    // string literals are of type const char[] (in this case that would be 
    // const char[4], including the null character '\0' at the end)
    // string literals are guaranteed to exist throughout the program's execution
    std::cout << "abc";

    // 0 here is integer literal
    return 0;
}
