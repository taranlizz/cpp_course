#include <iostream>

int main()
{
    int a{6};
    int b{3};
    int c{8};
    int d{9};
    int e{3};
    int f{2};
    int g{5};

    // Operator precedence specifies the order in which operations are performed within an expression
    // Operator associativity determines the order in which operands are grouped when multiple operators have the same precedence

    int result = a + b * c - d / e - f + g; // result is being calculated following precedence/associativity rules

    std::cout << "result : " << result << std::endl;

    result = 10 - 5 - 2; // = 3, subtraction is left-associative, L -> R
    std::cout << "result(left-associative): " << result << std::endl;

    result = a = c = 10; // result = 10, assignment is right-associative, L <- R, result = (b = (c = 10))
    std::cout << "result(right-associative): " << result << std::endl;

    // It is better to make the intent in your code as clear as possible by clearly using () thereby explicitly declaring precedence;

    return 0;
}