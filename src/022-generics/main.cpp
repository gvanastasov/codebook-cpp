#include <iostream>

// Function template
// the type of the parameter is not known at the time of writing the function
// the type is determined at the time of calling the function
template <typename T>
T max(T a, T b)
{
    return a > b ? a : b;
}

// Struct template
// the type of the struct is not known at the time of writing the struct
// the type is determined at the time of creating a variable of the struct
template <typename T>
struct Point
{
    T x;
    T y;
};

int main()
{
    // Function template is called with the type specified
    std::cout << max<int>(1, 2) << std::endl;
    std::cout << max<float>(1.1, 2.2) << std::endl;

    // Struct template is called with the type specified
    Point<int> point1 = {10, 20};
    Point<float> point2 = {30.3, 40.4};

    return 0;
}
