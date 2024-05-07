#include <iostream>

// allows using members of the std namespace without the std:: prefix
using namespace std;

// any member not defined inside a class, function or namespace is part of the global namespace
// non-const global variable definition (without initializer)
int x;

// non-const global variable definition (with initializer)
int y { 5 };

int main()
{
    // cout is a member of the std namespace
    // :: is the scope resolution operator
    // when the namespace is added as prefix, we call this fully qualified name
    // fully qualified name is used to avoid ambiguity (and confusion) when two namespaces have members with the same name
    std::cout << "Hello world!";
    return 0;
}
