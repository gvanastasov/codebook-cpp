#include <iostream>

// allows using members of the std namespace without the std:: prefix
using namespace std;

// any member not defined inside a class, function or namespace is part of the global namespace
// non-const global variable definition (without initializer)
int x;

// non-const global variable definition (with initializer)
int y { 5 };

// we can create our own namespaces to avoid naming collisions
namespace Something
{
    void say_hello()
    {
        std::cout << "Hello from Something namespace!" << endl;
    }

    // we can nest namespaces
    namespace Inner
    {
        void say_hello()
        {
            std::cout << "Hello from Inner namespace!" << endl;
        }
    }
}

void say_hello()
{
    std::cout << "Hello from global namespace!" << endl;
}

int main()
{
    // cout is a member of the std namespace
    // :: is the scope resolution operator
    // when the namespace is added as prefix, we call this fully qualified name
    // fully qualified name is used to avoid ambiguity (and confusion) when two namespaces have members with the same name
    std::cout << "Hello world!";
    
    // using scope resolution operator without the namespace prefix will call the member from the global namespace
    Something::Inner::say_hello();
    Something::say_hello();
    ::say_hello();

    // we can alias namespaces
    namespace S = Something;
    S::say_hello();

    return 0;
}
