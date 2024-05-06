#include <iostream>

int main() 
{
    // this is a statement that can be broken down to - type identifier { expression };
    // the expression initializes a variable
    // an expression is a combination of literals, variables, operators
    // that can be evaluated to a single value
    int a { 10 };
    std::cout << a << std::endl;
    
    // 10 and 20 are subexpressions
    // + is an operator, resulting in a compound expression
    // 10 + 20 is a full expression
    int b { 10 + 20};
    std::cout << b << std::endl;

    int c { 10 * 10 + 10};
    std::cout << c << std::endl;

    int d { b };
    std::cout << d << std::endl;

    // this is useless expression, which will compile and compute
    // and the result will be discarded
    (2 * 3);

    return 0;
}
