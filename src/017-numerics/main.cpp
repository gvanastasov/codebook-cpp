#include <iostream>

// Numerics are used to represent numbers
int main() {
    // we declare an integer variable
    // 5 is decimal number
    int x = 5;
    std::cout << "x: " << std::dec << x << std::endl;

    // we can represent numbers in different bases
    // binary numbers are represented by prefixing the number with 0b or 0B
    // binary numbers are base 2 numbers
    // 0b101 is 5 in decimal
    int y = 0b101;
    std::cout << "y: " << y << std::endl;

    // octal numbers are represented by prefixing the number with 0
    // octal numbers are base 8 numbers
    // 012 is 10 in decimal
    int z = 012;
    std::cout << "z: " << std::oct << z << std::endl;

    // hexadecimal numbers are represented by prefixing the number with 0x or 0X
    // hexadecimal numbers are base 16 numbers
    // 0xA is 10 in decimal
    int w = 0xA;
    std::cout << "w: " << std::hex << w << std::endl;

    return 0;
}
