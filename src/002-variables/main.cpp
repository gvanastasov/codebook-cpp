#include <iostream>

int main() 
{
    // type is specified in order for the program to allocate memory
    // variable declaration and initialization
    // sintax: type identifier = value;
    // copy initialization - value of 25 is copied into the variable age
    int age = 25;

    // direct initialization - value of 25 is directly assigned to the variable age1
    int age1(25);

    // uniform initialization - value of 25 is directly assigned to the variable age2
    int age2{25};

    // variable declaration
    int year;

    // variable initialization
    year = 2024;
    
    // variable declaration and initialization
    float pi = 3.14159;
    
    // variable declaration
    float radius;
    
    // variable initialization
    radius = 5.0;
    
    // variable declaration and initialization
    float area = pi * radius * radius;
    
    // variable declaration
    float circumference;
    
    // variable initialization
    circumference = 2 * pi * radius;

    // print the variables
    std::cout << "I am " << age << " years old." << std::endl;
    std::cout << "It is " << year << " now." << std::endl;
    std::cout << "The area of a circle with radius " << radius << " is " << area << std::endl;
    std::cout << "The circumference of a circle with radius " << radius << " is " << circumference << std::endl;

    // return 0 to indicate successful completion of the program
    return 0;
}
