#include <iostream>

// every variable has a type
// data is stored as binary (0s or 1s) in memory
// the type of the variable determines the size of the memory allocated
// size is usually measured in bytes
// 1 byte is 8 bits (1 bit is a binary digit)
// data is stored via addresses in memory (more on this later)
// fundamental types are the basic types provided by the language
int main() {
    // integrals

    // size of short int is 2 bytes, or 16 bits
    short int si = 10;
    std::cout << si << std::endl;

    // size of int is 4 bytes, or 32 bits
    // the fractional part is truncated
    int i = 10.2345;
    std::cout << i << std::endl;

    // size of long int is 4 bytes, or 32 bits
    long int li = 10;
    std::cout << li << std::endl;

    // size of long long int is 8 bytes, or 64 bits
    long long int lli = 10;
    std::cout << lli << std::endl;

    // size of float is 4 bytes, or 32 bits
    // floating point
    float f = 10.2345;
    std::cout << f << std::endl;

    // size of double is 8 bytes, or 64 bits
    double d = 10.2345;
    std::cout << d << std::endl;

    // size of long double is 16 bytes, or 128 bits
    long double ld = 10.2345;
    std::cout << ld << std::endl;

    // character
    // size of char is 1 byte, or 8 bits
    char c = 'A';
    std::cout << c << std::endl;

    // size of wchar_t is 2 bytes, or 16 bits
    // stands for wide character
    wchar_t wc = L'A';
    std::wcout << wc << std::endl;

    // size of char16_t is 2 bytes, or 16 bits
    // UTF-16 encoding (encoding is a way to represent characters in memory)
    char16_t c16 = u'A';
    std::cout << c16 << std::endl;

    // size of char32_t is 4 bytes, or 32 bits
    // UTF-32 encoding 
    char32_t c32 = U'A';
    std::cout << c32 << std::endl;

    // boolean
    // size of bool is 1 byte, or 8 bits
    // size of bool can technically be a single bit, but because machines
    // are designed to work with bytes, it is 1 byte - the smallest unit of memory
    bool b = true;
    std::cout << b << std::endl;

    return 0;
}

// void is also a fundamental type but cannot be used as a variable type
// void is used as a return type for functions that do not return a value
void doSomething() {
    // void
    return;
}
