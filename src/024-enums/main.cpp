#include <iostream>

// Enums are user-defined types that consist of a set of named integral constants
// Enums are used to create a set of named constants that can be assigned to a variable
// Enums are defined using the enum keyword
// Enums can be unscoped or scoped

// Unscoped enums are defined using the enum keyword
// Unscoped enums are implicitly converted to integers
// Unscoped enums are not type-safe
// Unscoped enums are not strongly typed
// Unscoped enum values are stored in the same scope as the enum, which is collision prone
enum Color
{
    Red, // 0
    Green, // 1
    Blue // 2
};

// to prevent collisions, unscoped enums are usually placed in a namespace
namespace Feelings
{
    enum Feeling
    {
        Happy,
        Blue
    };
}

// Enum values can be explicitly assigned
// Enum values can be assigned to any integral type
// Next values are automatically assigned with a step of +1
enum Armor
{
    Helmet = -3,
    Chestplate, // -2
    Leggings, // -1
    Boots = 10,
    Shield // 11
};

void compareUnscopedEnums()
{
    Color apple = Red;
    Armor armor = Helmet;

    // we can compare enum values (because they are implicitly converted to integers)
    // illogical, because we can compare fruits to armors
    if (apple == armor)
    {
        std::cout << "Colors are the same" << std::endl;
    }
    else
    {
        std::cout << "Colors are different" << std::endl;
    }
}

// Scoped enums are defined using the enum class keyword
// Scoped enums are strongly typed
// Scoped enums are type-safe
// Scoped enums are not implicitly converted to integers
// Scoped enums are not stored in the same scope as the enum
enum class Fruit
{
    Apple,
    Banana,
    Orange
};

void compareScopedEnums()
{
    // we need to use the scope resolution operator to access the enum values
    Fruit apple = Fruit::Apple;
    Armor armor = Helmet;

    // we cannot compare enum values (because they are not implicitly converted to integers)
    // we need to cast them to the same type
    if (static_cast<int>(apple) == static_cast<int>(armor))
    {
        std::cout << "Fruits are the same" << std::endl;
    }
    else
    {
        std::cout << "Fruits are different" << std::endl;
    }
}

int main() 
{
    Color apple = Red;
    std::cout << apple << std::endl; // 0

    Color sky = Blue;
    Feelings::Feeling skyFeeling = Feelings::Blue;
}
