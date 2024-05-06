#include <iostream>

int main() 
{
    // herein 10 is literal value and a is variable
    // a is assigned value 10
    int a = 10;
    std::cout << a << std::endl;

    // Increment a by 1
    a = a + 1;
    std::cout << a << std::endl;

    // Decrement a by 1
    a = a - 1;
    std::cout << a << std::endl;

    // Multiply a by 2
    a = a * 2;
    std::cout << a << std::endl;

    // Divide a by 2, because we are using integer 'destination' variable
    // the result will be rounded down
    a = a / 2;
    std::cout << a << std::endl;

    // Modulus a by 2
    a = a % 2;
    std::cout << a << std::endl;

    // Increment a by 1
    a++;
    std::cout << a << std::endl;

    // Decrement a by 1
    a--;
    std::cout << a << std::endl;

    // Increment a by 2 (a = a + 2)
    // can use other operators as well
    a += 2;
    std::cout << a << std::endl;

    // Unary operator
    a = -a;
    std::cout << a << std::endl;

    // Ternerary operator (condition ? true : false) - later on this
    // Equality operator (==)
    a = 10 == 10 ? 5 : 0;
    std::cout << a << std::endl;

    // Chain of operators
    a = 10 + 5 * 2;
    std::cout << a << std::endl;

    return 0;
}
