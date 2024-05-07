#include <iostream>

int main() {
    // integrals
    short int si = 10;
    std::cout << si << std::endl;

    // the fractional part is truncated
    int i = 10.2345;
    std::cout << i << std::endl;

    long int li = 10;
    std::cout << li << std::endl;

    long long int lli = 10;
    std::cout << lli << std::endl;

    // floating point
    float f = 10.2345;
    std::cout << f << std::endl;

    double d = 10.2345;
    std::cout << d << std::endl;

    long double ld = 10.2345;
    std::cout << ld << std::endl;

    // character
    char c = 'A';
    std::cout << c << std::endl;

    wchar_t wc = L'A';
    std::wcout << wc << std::endl;

    char16_t c16 = u'A';
    std::cout << c16 << std::endl;

    char32_t c32 = U'A';
    std::cout << c32 << std::endl;

    // boolean
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
