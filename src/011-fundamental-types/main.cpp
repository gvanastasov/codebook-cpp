#include <iostream>
#include <cstdint>

// forward declarations
void sign();
void overflow();

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

    sign();
    overflow();
    integers();

    return 0;
}

// void is also a fundamental type but cannot be used as a variable type
// void is used as a return type for functions that do not return a value
void doSomething() 
{
    // void
    return;
}

// signed and unsigned are qualifiers that can be used with some types
void sign() 
{
    // signed means the variable can store both positive and negative values
    // unsigned means the variable can store only positive values
    // by default, integral types are signed
    // unsigned can be used to increase the range of positive values
    // signed can be used to store negative values
    
    // size of unsigned short int is 2 bytes, or 16 bits
    // range is 0 to 65535 = 2^16 - 1 = 65535
    // the one bit (subtracted) is used to store the sign
    unsigned short ui = 10;
    std::cout << ui << std::endl;

    // size of signed short int is 2 bytes, or 16 bits
    // range is -32768 to 32767 = -2^15 to 2^15 - 1 = -32768 to 32767
    // the one bit (subtracted) is used to store the sign
    signed short si = -10;
    std::cout << si << std::endl;
}

void overflow()
{
    // overflow occurs when the value of a variable exceeds the range of values
    // that can be stored in the variable
    // the value wraps around to the other end of the range
    // this is because the memory allocated to the variable is fixed
    // and the variable cannot store values beyond the range
    // this can lead to unexpected results
    // the program may crash or produce incorrect results

    // the range is 0 to 65535, but the value is 65536
    // the value wraps around to 0
    unsigned short usi = USHRT_MAX + 1;
    std::cout << usi << std::endl;
}

void integers() 
{
    // fixed sizes
    // size of int8_t is 1 byte, or 8 bits
    // theres also int16_t, int32_t, int64_t (and unsigned versions)
    // the fixed size types are used when you need a fixed size
    int8_t fixedSizeInt = 10;
    std::cout << "int8_t: " << sizeof(fixedSizeInt) * 8 << "bits\n";

    // variable sizes
    // only the minimum size is guaranteed
    // theres also int_least8_t, int_least16_t, int_least32_t, int_least64_t (and unsigned versions)
    // as well as int_fast8_t, int_fast16_t, int_fast32_t, int_fast64_t (and unsigned versions)
    // the variable size types are used when you need a variable size but want to optimize for speed
    // the difference between least and fast is that least guarantees the minimum size
    int variableSizeInt = 10;
    std::cout << "int: " << sizeof(variableSizeInt) * 8 << "bits\n";

    int_least8_t variableLeastSizeInt = 10;
    std::cout << "int_least8_t: " << sizeof(variableLeastSizeInt) * 8 << "bits\n";

    int_fast8_t variableFastSizeInt = 10;
    std::cout << "int_fast8_t: " << sizeof(variableFastSizeInt) * 8 << "bits\n";
}
