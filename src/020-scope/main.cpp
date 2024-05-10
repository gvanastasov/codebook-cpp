#include <iostream>

// Scope is the region of the program where a variable is defined.
// C++ allows to define variables in different scopes.
// The inner scope can access the variables of the outer scope.
// The outer scope cannot access the variables of the inner scope.
// In this case, the inner scope variable will hide the outer scope variable.
// Scope is defined by the curly braces {}, and is also called block scope, or simply block.
// The most outer scope is called global scope.
// The most inner scope is called local scope.
// The scope of a variable is the region of the program where the variable is accessible.
// The scope of a variable is defined by the location where the variable is declared.

// Global variable
int x = 5;

// Global variable with static storage duration
// static variables/functions are only accessible in the file where they are defined (enforced internal linkage)
static int y = 10;

// Global constant
// const variables are immutable, and cannot be changed
// const variables are only accessible in the file where they are defined (internal linkage)
const int z = 15;

// Global function definition
// defaults to external linkage (can be accessed in other files)
void printNumber(int number)
{
    // number is a parameter of the function, and it is in the scope of the function.
    // number is not accessible outside the function.
    std::cout << "Number: " << number << std::endl;
}

// Global constant with external linkage (can be accessed in other files)
extern const int w = 20;

// Just like variables, functions can be defined in different namespaces
// when a function is defined in a namespace, it is only accessible in that namespace
// when a function is defined in a class, it is only accessible in that class (more on this later)
// namespaces provide a way to organize the code and prevent name conflicts/collisions
// namespace is a way to group related code together
namespace myNamespace
{
    void printNumber(int number)
    {
        std::cout << "Number: " << number << std::endl;
    }
}

// namespaces can be defined in different files (partitioned)
namespace myNamespace
{
    void printSomething()
    {
        std::cout << "Something" << std::endl;
    }

    // namespaces can be nested
    namespace nestedNamespace
    {
        void printSomething()
        {
            // static duriation can be specified on local variables too
            // calling this function multiple times will not reinitialize x
            // x will be initialized only once
            static int x = 1;
            std::cout << "Nested Something" << x << std::endl;
            x++;
        }
    }
}

// namespace can be anonymous
namespace
{
    // anonymous namespace is used to define variables/functions that are only accessible in the file where they are defined
    // anonymous namespace is used to prevent name conflicts/collisions
    // anonymous namespace is used to define variables/functions with internal linkage
    int a = 1;
}

// namespace can be inline
// this creates internal linkage
inline namespace inlineNamespace
{
    // inline namespace is used to define variables/functions that are only accessible in the file where they are defined
    int b = 2;
}

int main()
{ // start of block

    // x is a global variable, and it is accessible in the main function.
    // this is not block, it is initialization
    int y {};

    // Local definition of x hides the global definition of x
    // all variable names must be unique in the same scope
    // all local variables have automatic storage duration
    // all variables are destroyed when the block ends
    int x = 10;

    // To access the global variable, we can use the scope resolution operator ::
    // all globla variables have static storage duration
    // global variables are created when the program starts and destroyed when the program ends
    std::cout << "Global x: " << ::x << std::endl;

    // block can be nested
    // block can be defined anywhere in the program
    {
        // The inner scope can define a variable with the same name as the outer scope.
        // The inner scope variable will be destroyed when the inner scope ends.
        int x = 20;
        std::cout << "Inner x: " << x << std::endl;
    }
    std::cout << "Outer x: " << x << std::endl;

    // some statements require a block (ex. conditional statement)
    if (y == 0)
    {
        // y is still 0, because the inner y is in a different scope
        int y = 100;
        std::cout << "Inner y: " << y << std::endl;
    }

    // to access namespace member, use the scope resolution operator ::
    myNamespace::printNumber(100);

    return 0;
} // end of block
