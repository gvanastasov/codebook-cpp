#include <iostream>

// Function definition
// syntax: 
//      return_type function_name(parameters)
//      {
//         function_body
//      } 
// 
// void is a return type which means function will not return anything
void printSomething()
{
    std::cout << "Something" << std::endl;
}

// Function printSomething() is declared above the call, so it is known to the compiler,
// printSomethingElse is not known to the compiler at this point, so it will throw an error
// unless we declare it upfront, ie 'forward declare' it:
void printSomethingElse();

// and another forward declaration, read further
int max(int a, int b);

// Function return statement is required when function return type is not void
// Functions can return a single value (although there are workarounds - later on this)
int getTen()
{
    return 10;
}

// Functions can call each other.
void printTen() 
{
    std::cout << getTen() << std::endl;
}

// Function can have parameters
// Functions can be overloaded (with different 'variation' of parameters)
void printSomething(int number)
{
    std::cout << "Something " << number << std::endl;
}

// Local function scope is defined by its body
// both number and multiplier are local variables, which will be 'destroyed' after the function execution
void printNumberTimesTwo(int number)
{
    int multiplier = 2;
    std::cout << number * multiplier << std::endl;
}

// main() function is the entry point of the program
// cannot be called from another function explicitly
int main() 
{
    // Function call
    printSomething();

    // Function call (which was declared after the call)
    printSomethingElse();

    // Function call and store return value in a variable
    int ten = getTen();
    std::cout << "Ten: " << ten << std::endl;

    // Function call
    // 5 is an argument passed to the function, whereas the function defines a parameter 'number' of type int 
    // 5 is 'copied' to the parameter 'number' and then used in the function (more on value/reference passing later on)
    printSomething(5);

    // Function execution will be chained as an expression
    // getTen() will be executed first and then the return value will be passed to printSomething() as an argument
    printSomething(getTen());

    // Inline functions are functions that are expanded in place
    // Inline functions are used to improve performance
    // Herein the function call will be replaced by the function body during compilation
    // Post compilation this will result in:
    // std::cout << "Max: " << (5 > 10 ? 5 : 10) << std::endl;
    std::cout << "Max: " << max(5, 10) << std::endl;

    return 0;
}

// Inline function definition
// inline keyword is used to define an inline function, however it is bad practice to define inline functions manually
inline int max(int a, int b)
{
    return a > b ? a : b;
}

void printSomethingElse()
{
    std::cout << "Something else" << std::endl;
}

void justAnotherFunction()
{
    std::cout << "Just another function" << std::endl;
}

// Function can be deleted
// deleted functions cannot be called
// deleted functions are used to prevent the function from being called
// its way to manupulate the function chain and overload resolution during runtime
void justAnotherFunction() = delete;
