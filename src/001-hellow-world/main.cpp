// preporcessor directive to include input output stream library
#include <iostream>

/*
	'main' function, mandatory for a c++ program
	returns an 'int'eger (a whole number, more on that later)
	takes no arguments ()
	body of the function is enclosed in curly braces {}

	ps: comments in c++ are denoted by '//' or multi-line like this section
*/
int main()
{
	// 'std' is a namespace, 'cout' is an object of class 'ostream' in the 'std' namespace
	// cout stands for 'character output' and is used to print to the console
	std::cout << "Hello, world!";

	// return 0 to indicate successful completion of the program
	return 0;
}
