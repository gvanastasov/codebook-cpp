#include <iostream>

// Function template
// the type of the parameter is not known at the time of writing the function
// the type is determined at the time of calling the function
template <typename T>
T max(T a, T b)
{
    return a > b ? a : b;
}

int main()
{
    // Function template is called with the type specified
    std::cout << max<int>(1, 2) << std::endl;
    std::cout << max<float>(1.1, 2.2) << std::endl;

    return 0;
}
