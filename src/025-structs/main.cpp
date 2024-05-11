#include <iostream>

// Structs are user-defined data types that can hold multiple variables of different data types.
// They are used to group related data together.
// Structs are value types and are passed by value.
struct Point2D
{
    int x;
    int y;
};

// when we don't provide values for all members, the rest will be initialized to their respective default values
struct Point3D
{
    // x will not be initialized
    int x;

    // y will be initialized to 0 (default value for int)
    int y{};

    // z will be initialized to 10
    int z = 10;
};

int main()
{
    // we can create a variable of type Point2D with default values
    Point2D point1;

    // we access the members of a struct using the dot operator (.)
    point1.x = 10;
    point1.y = 20;

    // we can also create a variable of type Point2D with custom values
    // also known as aggregate initialization
    // if we don't provide values for all members, the rest will be initialized to their respective default values
    // this will copy the values of the initializer to the members of the struct
    Point2D point2 = {30, 40};

    // all members are defaulted
    // this will not copy any values to the members of the struct
    // list uniform initialization
    Point2D point3 {};

    // we can also copy one struct to another
    Point2D point4 = {point2};

    std::cout << "Point1: (" << point1.x << ", " << point1.y << ")" << std::endl;

    // we pass the struct by value
    // the original point will not be changed
    zeroPoint(point1);
    std::cout << "Point1: (" << point1.x << ", " << point1.y << ")" << std::endl;

    // the original point will be changed
    zeroPointRef(point1);
    std::cout << "Point1: (" << point1.x << ", " << point1.y << ")" << std::endl;

    return 0;
}

void zeroPoint(Point2D point)
{
    // this will not change the original point
    point.x = 0;
    point.y = 0;
}

void zeroPointRef(Point2D& point)
{
    // this will change the original point
    point.x = 0;
    point.y = 0;
}
