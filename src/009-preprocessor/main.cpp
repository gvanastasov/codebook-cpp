// preprocessor directives are used to include files, define constants, and perform conditional compilation
// preprocessor directives are processed before the code is compiled
// they start with a # symbol
// they don't end with a semicolon

// #include is used to include files
// the preprocessor will replace the #include directive with the contents of the included file
#include <iostream>

// #define is used to define constants
// the preprocessor will replace the MY_NAME macro with "John Doe"
#define MY_NAME "John Doe"

void doSomething()
{
    // preprocessor directives are not scoped
    #define MY_AGE 30
}

int main()
{

    std::cout << "My name is: " << MY_NAME << "\n";

    std::cout << "My age is: " << MY_AGE << "\n";

// #ifdef is used to check if a macro is defined
// if the macro is defined, the code between #ifdef and #endif will be included in the compilation
// if the macro is not defined, the code will be excluded (from the compilation)
// follows the same rules as conditional statements (if, else, else if - more on that later)
#ifdef MY_HOBBY
    std::cout << "My hobby is: " << MY_HOBBY << "\n";
#else
    std::cout << "I don't have a hobby\n";
#endif

    return 0;
}

