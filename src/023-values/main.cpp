#include <iostream>

void increment(int a);
void incrementRef(int& a);

// Each expression has a type, which is determined by the compiler
// The type of an expression is the type of the value it produces
// Apart from type, each expression has a value category
// The value category of an expression is the property that determines whether the expression can be used as... value
// There are 2 primary and 3 additional value categories in C++: lvalue, rvalue + xvalue, prvalue and glvalue
int main()
{
    // rvalue - represents an object that does not occupy an identifiable location in memory
    // rvalues can be used as the right-hand side of an assignment
    // we cannot write 5 = something; this would compile an error
    int x { 5 };

    // lvalue - represents an object that occupies some identifiable location in memory
    // lvalues can be used as the left-hand side of an assignment
    int y { x }; 

    // x and y are the objects themselves and NOT a references to them
    // operations on lvalues are performed on the memory location they reference

    // when we call a function with an argument that is an lvalue, the function parameter is a copy of the argument
    increment(x);
    std::cout << x << std::endl; // 5

    // we can instead create and pass a reference to the argument
    // the function parameter is now a reference to the argument
    // changes made to the parameter affect the argument
    // reference types are lvalues and are constructed via the & operator
    // reference type instances are not objects themselves, but are references to objects
    // reference type instances cannot be reassigned to reference another object
    int& refX = x;
    incrementRef(refX);
    std::cout << x << std::endl; // 6

    // we can access the memory location of an object using the address-of operator &
    std::cout << &x << std::endl;

    // we can access the value stored at a memory location using the dereference operator *
    std::cout << *(&x) << std::endl;

    // we can also create a pointer to an object
    // pointers are objects that store the memory address of another object
    // pointers are lvalues
    // pointer types are constructed using the * operator
    // pointers differ from references in that they can be reassigned to point to another object
    // pointer type must match the type of the object it points to
    int* ptrX = &x;
    std::cout << "pointer: " << ptrX << " value: " << *ptrX << std::endl;

    ptrX = &y;
    std::cout << "pointer: " << ptrX << " value: " << *ptrX << std::endl;

    // we can also use the dereference operator to modify the value stored at a memory location
    *ptrX = 10;
    std::cout << "pointer: " << ptrX << " value: " << *ptrX << std::endl;

    // we can have a null pointer
    // a null pointer does not point to any object
    // a null pointer is a pointer that is assigned the value nullptr
    ptrX = nullptr;
}

void increment(int a)
{
    // a is a copy of the argument passed to the function
    // a is an lvalue
    // we can modify a
    // the changes made to a do not affect the argument passed to the function
    a++;
}

void incrementRef(int& a)
{
    // a is a reference to the argument passed to the function
    // a is an lvalue
    // we can modify a
    // the changes made to a affect the argument passed to the function
    a++;
}

// x is passed by value (as a copy)
// x is considered IN parameter
void print(int x)
{
    std::cout << x << std::endl;
}

// x is passed by reference
// x is an lvalue
// x can be reassigned to reference another object
// when x is changed in the function, the argument passed to the function is also changed
// x is considered OUT parameter
void printRef(int& x)
{
    x = 100;
    std::cout << x << std::endl;
}

// x is passed by reference
// x is an lvalue
// x is an alias to the argument passed to the function
// x cannot be reassigned to reference another object
// because x is a constant reference, we cannot modify x
// x is considered IN parameter
void printConst(const int& x)
{
    std::cout << x << std::endl;
}
