#include <iostream>

void print(double x)
{
    std::cout << x << std::endl;
}

void printInt(int x)
{
    std::cout << x << std::endl;
}

// Casting is used to convert a value from one data type to another
// There are two types of casting: implicit casting and explicit casting
// Implicit casting is done automatically by the compiler
// Explicit casting is done by the programmer
int main() {
    // we pass an int type of argument while the function expects a double type parameter
    // the int value is implicitly converted to a double value
    // the char value is implicitly converted to an int value (a=97 in ASCII table)
    print(5);
    print('a');

    // we pass a double type of argument while the function expects an int type parameter
    // the double value is implicitly converted to an int value
    // the fractional part is truncated
    printInt(5.5);

    // we can cast a value to another data type by placing the target data type in parentheses before the value
    // this is called a static cast
    // static cast is used to convert between related data types
    // for example, converting an int to a double
    int x = 97;
    double y = static_cast<double>(x);
    char c = static_cast<char>(x);

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "value " << x << " is converted to character " << c << std::endl;

    return 0;
}
