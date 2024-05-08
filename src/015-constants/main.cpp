#include <iostream>

void doSomething(int x) {
    std::cout << "In doSomething(int): " << x << std::endl;
}

// Constants are used to store values that do not change
// Constants are declared using the const keyword
// Constants must be initialized when they are declared
// Constants cannot be modified
int main() {
    // we declare a constant integer variable
    // the value of a constant cannot be changed
    const int x = 5;

    // we declare a constant double variable
    const double y = 3.14;

    // we declare a constant character variable
    const char c = 'a';

    // we declare a constant string variable
    const std::string s = "Hello, World!";

    // we can also use the #define preprocessor directive to define a constant
#define PI 3.14

    // we can use the constant in our program
    std::cout << "PI: " << PI << std::endl;

    // we can use the sizeof operator to determine the size of a variable
    // the size of a constant is the same as the size of its data type
    std::cout << "Size of int: " << sizeof(x) << " bytes" << std::endl;
    std::cout << "Size of double: " << sizeof(y) << " bytes" << std::endl;
    std::cout << "Size of char: " << sizeof(c) << " bytes" << std::endl;
    std::cout << "Size of string: " << sizeof(s) << " bytes" << std::endl;

    // we can pass a constant to a function
    // the constant is implicitly converted to a non-constant value, when copied to the function parameter
    doSomething(50);

    return 0;
}
