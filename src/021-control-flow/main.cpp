#include <iostream>

void printWeekday(int x);

// Control flow is the order in which the program executes the code.
// Control flow is determined by the order of statements in the program.
int main() {
    std::cout << 1 << std::endl;
    
    // if statement is used to execute a block of code if a condition is true.
    if (false) {
        std::cout << 2 << std::endl;
    } else {
        std::cout << 3 << std::endl;
    }

    printWeekday(2);

    return 0;
}

void printWeekday(int x) {
    // switch statement is used to execute a block of code depending on the value of an expression.
    // switch statement is used to replace multiple if statements.
    // switch statement is used to compare the value of the expression to the values of the case labels.
    // switch statement is used to execute a block of code depending on the value of the expression.
    switch (x)
    {
        case 1:
            std::cout << "Monday" << std::endl;
            break;
        case 2:
            std::cout << "Tuesday" << std::endl;
            break;
        case 3:
            std::cout << "Wednesday" << std::endl;
            break;
        case 4:
        case 5:
            // we can have multiple case labels for the same block of code
            // case 4 and case 5 will execute the same block of code
            std::cout << "Not done yet..." << std::endl;

            // because we dont specify break point, the code will continue to execute the next case
            // called fall-through
            // can be denoted with [[fallthrough]] to indicate that the fall-through is intentional
            [[fallthrough]];
        case 6:
        case 7:
            std::cout << "Weekend" << std::endl;
            break;  
        default:
            // default case is executed if the value of the expression does not match any of the case labels
            std::cout << "Invalid Number" << std::endl;
            break;
    }
}

void getDividerOfThree(int input)
{
// goto statement is used to transfer control to another part of the program.
// goto statement is used to transfer control to a labeled statement.
tryAgain:
    if (input % 3 != 0)
    {
        std::cout << "Input is not divisible by 3. Please try again: ";
        std::cin >> input;
        goto tryAgain;
    }
    std::cout << "Input is divisible by 3." << std::endl;
}

void countToTen()
{
    int i = 1;
    // while loop is used to execute a block of code as long as a condition is true.
    while (i <= 10)
    {
        std::cout << i << " ";
        i++;
    }
    std::cout << std::endl;

    // while loop can be infinite
    while(true)
    {
        std::cout << "Infinite loop" << std::endl;
        // we can use break statement to exit the loop
        break;
    }

    bool once = false;
    while (!once)
    {
        once = true;
        // we can use continue statement to skip the rest of the code in the loop and 
        // start the next iteration
        continue;
        std::cout << "This will not be printed" << std::endl;
    }

    // do-while loop is used to execute a block of code at least once, and then 
    // repeatedly execute the block as long as a condition is true. Oppose to while loop
    // where the condition is checked before the block is executed.
    do {
        std::cout << "This will be printed at least once" << std::endl;
    } while (false);

    // for loop is used to execute a block of code a specified number of times.
    // we can specify the initialization, condition, and increment/decrement in the for loop
    // we can have multiple initializations, conditions, and increment/decrement statements
    for(int j = 1; j <= 10; j++)
    {
        std::cout << j << " ";
    }
    std::cout << std::endl;
}
