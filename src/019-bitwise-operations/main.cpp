#include <iostream>
#include <bitset>

int main() {
    [[maybe_unused]] constexpr int melee = 0;
    [[maybe_unused]] constexpr int ranged = 1;
    [[maybe_unused]] constexpr int magic = 2;
    [[maybe_unused]] constexpr int fire = 3;
    [[maybe_unused]] constexpr int ice = 4;
    [[maybe_unused]] constexpr int poison = 5;
    [[maybe_unused]] constexpr int lightning = 6;
    // imagine more if you would like

    // bitwise operations are used to store multiple flags in a single variable
    // 0000 0000 0000 0000 0000 0000 0000 0000
    std::bitset<32> sword(0b0);

    // we can set a flag (to 1) via .set method
    // 0000 0000 0000 0000 0000 0000 0000 0001
    sword.set(melee);

    // 0000 0000 0000 0000 0000 0000 0000 1001
    sword.set(fire);

    // we can flip the value (from 0 to 1 and vice versa) via .flip method
    // 0000 0000 0000 0000 0000 0000 0000 0001
    sword.flip(fire);

    // 0000 0000 0000 0000 0000 0000 0001 0001
    sword.flip(ice);

    // we can reset a flag (to 0) via .reset method
    // 0000 0000 0000 0000 0000 0000 0000 0001
    sword.reset(ice);

    // we can check if a flag is set via .test method
    std::cout << "Sword: " << sword << std::endl;
    std::cout << "Melee: " << sword.test(melee) << std::endl;
    std::cout << "Fire: " << sword.test(fire) << std::endl;
    std::cout << "Ice: " << sword.test(ice) << std::endl;

    // we can shift the bits to the left via << operator
    // 0000 0000 0000 0000 0000 0000 0000 0010
    sword <<= 1;

    // we can shift the bits to the right via >> operator
    // 0000 0000 0000 0000 0000 0000 0000 0001
    sword >>= 1;

    // we can combine flags via | operator (bitwise OR)
    // 0000 0000 0000 0000 0000 0000 0000 1001
    sword |= 0b1001;

    // we can remove flags via & operator (bitwise AND)
    // 0000 0000 0000 0000 0000 0000 0000 1001
    sword &= 0b1001;

    // we can toggle flags via ^ operator (bitwise XOR)
    // 0000 0000 0000 0000 0000 0000 0000 1001
    sword ^= 0b1001;

    // we can negate flags via ~ operator (bitwise NOT)
    // 1111 1111 1111 1111 1111 1111 1111 0110
    sword = ~sword;

    return 0;
}
