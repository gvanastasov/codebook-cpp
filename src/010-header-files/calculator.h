/*
    This is a header file.
    The purpose of a header file is to provide information to the compiler about the symbols used in the program.
    We also use header guard to prevent multiple inclusions of the same header file in the same translation unit.
    The header guard is defined by the preprocessor directive #ifndef, #define, and #endif.
*/
#ifndef CALCULATOR_H
    #define CALCULATOR_H
// propagate forward declaration of add function
int add(int x, int y);
#endif
