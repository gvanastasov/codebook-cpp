#include <iostream>
#include <string_view>

void doSomething(std::string s);
void doSomething(std::string_view s);

// Strings are used to represent text
int main() {
    // we declare a string variable
    // a string is a sequence of characters
    // a string is enclosed in double quotes
    std::string s = "Hello, World!";
    std::cout << "s: " << s << std::endl;

    // we can use the sizeof operator to determine the size of a string
    // the size of a string is the size of the string object
    std::cout << "Size of string: " << sizeof(s) << " bytes" << std::endl;

    // we can use the length() method to determine the length of a string
    // the length of a string is the number of characters in the string
    std::cout << "Length of string: " << s.length() << " characters" << std::endl;

    // we can use the + operator to concatenate strings
    // the + operator is used to concatenate strings
    std::string t = "Hello, ";
    std::string u = "World!";
    std::string v = t + u;
    std::cout << "v: " << v << std::endl;

    // we can use the [] operator to access characters in a string
    // the [] operator is used to access characters in a string
    // the [] operator is zero-based
    std::cout << "v[0]: " << v[0] << std::endl;
    std::cout << "v[1]: " << v[1] << std::endl;

    // we can use the substr() method to extract a substring from a string
    // the substr() method is used to extract a substring from a string
    // the substr() method takes two arguments: the starting index and the length of the substring
    std::string w = v.substr(7, 5);
    std::cout << "w: " << w << std::endl;

    // we can declare an empty string
    // an empty string is a string with no characters
    std::string es = "";
    std::string es1{};

    // we can use the empty() method to determine if a string is empty
    // the empty() method is used to determine if a string is empty
    // the empty() method returns true if the string is empty, otherwise it returns false
    std::cout << "es is empty: " << es.empty() << std::endl;

    // strings use a dynamic memory allocation
    std::string name = "John";
    name = "Doe";

    // in the following example, the string object is created
    // and the string literal is copied to that string object
    // calling the function doSomething and passing the string object will cause yet another copy
    // copy operation is costly
    std::string s1 = "John";
    doSomething(s1);

    // to avoid this we can use a reference to READ-ONLY string
    // one way to do that is by using const reference (more on references later)
    const std::string& s2 = "John";

    // another way is to use string_view
    // string_view is a non-owning reference to a string
    // string_view is a lightweight object
    // string_view is used to pass strings to functions without copying them
    // the string can only be read, not modified
    const std::string_view s3{s1};
    doSomething(s3);

    // changes to original string will reflect in string_view
    s1 = "Doe";
    doSomething(s3);

    return 0;
}

void doSomething(std::string s) {
    std::cout << s << std::endl;
}

void doSomething(std::string_view s) {
    std::cout << s << std::endl;
}
