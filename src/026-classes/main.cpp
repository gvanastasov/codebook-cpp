#include <iostream>

// Class definition
// Class is a blueprint for creating objects
// Class is a user-defined data type
// Class is a collection of data members and member functions
// Class provides a way to hide data (encapsulation) and restrict access to data (access specifiers)
// Data members are variables that store data
// Member functions are functions that operate on data members
class Person
{
    // Access specifier
    // Public members are accessible from outside the class
    public:
        // Constructors
        // Special member functions that are called when an object is created
        // Default constructor
        Person()
        {
            // Initialize data members
            // name = "Unknown";
            // age = 0;

            // or use the chain/delegate to another constructor
            Person("Unknown", 0);
        }
        // Parameterized constructor
        Person(std::string name, int age)
        {
            // Initialize data members
            // this is a pointer to the object that is being created
            this->name = name;
            this->age = age;
            count++;
        }
        // Parameterized constructor with default arguments using list initialization
        Person(std::string name)
            : name { name },
            age { 0 }
        {   
            count++;
        }
        // Copy constructor
        // Called when an object is initialized with another object
        // Passed by reference to avoid infinite recursion
        // Passed by const reference to avoid modification
        // Compiler provides a default copy constructor if not defined (implicitly defined)
        Person(const Person &person)
        {
            // Copy data members
            name = person.name;
            age = person.age;
            count++;
        }

        // We can explicitly request the compiler to generate the default copy constructor
        // Person(const Person &person) = default;

        // We can explicitly request the compiler to not generate the default copy constructor
        // Person(const Person &person) = delete;

        // Destructor
        // Special member function that is called when an object is destroyed
        // Called when an object goes out of scope
        // Called when delete is called on a pointer to an object
        // Called when the program terminates
        // Compiler provides a default destructor if not defined (implicitly defined)
        ~Person()
        {
            // Clean up resources and do some important work before the object is destroyed
            count--;
        }

        // Data members
        std::string name;
        int age;
        // Member functions
        void print()
        {
            std::cout << "Name: " << name << ", Age: " << age << std::endl;
        }

        // Static members
        // Shared among all objects of the class
        // Only one copy of the static member exists
        // Static members are not associated with any object
        // Static members are accessed using the class name
        static int count;

        // Classes can be extended using friend functions
        // Friend functions can access private and protected members of a class
        // Friend functions are not member functions of a class
        // Friend functions are declared inside the class and defined outside the class
        friend void printAddress(Person &person);

        // Classes can be extended using friend classes
        // Friend classes can access private and protected members of a class
        // Friend classes are not member classes of a class
        // Friend classes are declared inside the class and defined outside the class
        // friend class Address;

    // Access specifier
    // Private members are not accessible from outside the class
    private:
        // Data members
        std::string address;
        // Member functions
        void setAddress(std::string addr)
        {
            address = addr;
        }
};

// Friend function definition for printing the address of a person
void printAddress(Person &person)
{
    // Access private data member of the class is not violation of encapsulation
    person.address = "1234, Park Street";
    std::cout << "Address: " << person.address << std::endl;
}

int main()
{
    // Create an object of class Person
    Person person1;
    // Access data members and member functions using the dot operator
    person1.name = "Alice";
    person1.age = 30;
    person1.print();

    // Create another object of class Person
    Person person2;
    person2.name = "Bob";
    person2.age = 25;
    person2.print();

    // We can create const instances of a class
    // We can't modify the data members of a const instance
    // We can only call const member functions of a const instance
    const Person person3 = {"Charlie", 20};

    // Copy constructor
    Person person3Copy = Person(person3);
    person3Copy.print();

    // Static members
    std::cout << "Count: " << Person::count << std::endl;

    return 0;
}
