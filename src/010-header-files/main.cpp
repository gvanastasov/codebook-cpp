// include the header file, which contains the function foward declaration
// and the actual function definition is in the calculator.cpp file, which
// is included in the project build
// header files are used to provide information to the compiler about the 
// symbols used in the program
#include "calculator.h"
#include <iostream>

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    return 0;
}
