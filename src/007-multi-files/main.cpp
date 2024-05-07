#include <iostream>

// Forward declaration of the add function
// the definition of the add function is in add.cpp
// configuring the project to compile and link add.cpp
// either by vscode tasks or cmake
int add(int x, int y);

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    return 0;
}
