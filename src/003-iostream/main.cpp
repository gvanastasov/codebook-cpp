#include <iostream>

int main()
{
    // prints text to the console
    std::cout <<"Line 0";

    // prints text on the same and then breaks on the next line (not the text, but 
    // rather the buffer streaming into the console, aka flushing it to its destination)
    std::cout << ", still" << " Line 0" << std::endl;

    std::cout << "Line 1" << std::endl;

    // prints text and moves the cursor to the next line (the text, not the buffer)
    std::cout << "Line 2" << '\n';

    int x {5};

    // prints the value of x
    std::cout << "The value of x is " << x << std::endl;

    char y {'A'};

    // single quotes for char, double quotes for strings (more on that later)
    // \n is ascii for newline (NL) therefore treated as a single character (not two)
    std::cout << 'A' << " is the same as " << y << '\n';

    // we can get input from the user via cin and store it in a variable
    std::cout << "Enter a new value for x: ";
    std::cin >> x;

    std::cout << "The new value of x is " << x << std::endl;

    // good practice to flush the buffer when the program is done
    std::cout << std::endl;

    return 0;
}
