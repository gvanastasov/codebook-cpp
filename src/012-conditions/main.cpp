#include <iostream>

// Conditions are used to execute different blocks of code based on the result of a conditional expression
int main() {
    int x = 10;
    int y = 20;

    // the result of a conditional expression is a boolean value
    // which is then used to determine which block of code to execute
    if (x > y) {
        std::cout << "x is greater than y" << std::endl;
    }
    // we can chain conditions using else if
    else if (x == y) {
        std::cout << "x is equal to y" << std::endl;
    }
    // if none is met, the else block will be executed 
    else {
        std::cout << "x is less than or equal to y" << std::endl;
    }

    // the result of a conditional expression can be stored in a variable
    // the variable will hold either true or false
    // a boolean result can be used in a conditional expression
    // where a 0 value is considered false and a non-zero value is considered true
    if (0) {
        std::cout << "This will never be printed" << std::endl;
    }
    else if (1) {
        std::cout << "This will always be printed" << std::endl;
    }

    // we can use logical operators to combine multiple conditions
    // && is the logical AND operator
    // || is the logical OR operator
    // ! is the logical NOT operator
    if (x > 5 && y < 30) {
        std::cout << "x is greater than 5 and y is less than 30" << std::endl;
    }

    if (x > 5 || y > 30) {
        std::cout << "x is greater than 5 or y is greater than 30" << std::endl;
    }

    if (!(x > 5)) {
        std::cout << "x is not greater than 5" << std::endl;
    }

    // we can use the ternary operator to assign a value based on a condition
    // the ternary operator is a shorthand for an if-else statement
    int z = x > y ? x : y;

    return 0;
}
