#include <iostream>

int main()
{
    bool a{true};
    bool b{false};
    bool c{true};

    std::cout << std::boolalpha;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    // AND : Evaluates to true when ALL operands are true
    std::cout << std::endl;

    std::cout << "a && b : " << (a && b) << std::endl;
    std::cout << "a && c : " << (a && c) << std::endl;
    std::cout << "a && b && c : " << (a && b && c) << std::endl;

    // OR : Evaluates to true when AT LEAST ONE operand true.
    std::cout << std::endl;

    std::cout << " a || b : " << (a || b) << std::endl;
    std::cout << " a || c : " << (a || c) << std::endl;
    std::cout << " a || b || c :" << (a || b || c) << std::endl;

    // NOT : Negates whatever operand you put it with
    std::cout << std::endl;

    std::cout << "!a : " << !a << std::endl;
    std::cout << "!b : " << !b << std::endl;
    std::cout << "!c : " << !c << std::endl;

    // Combination

    std::cout << std::endl;

    std::cout << "!(a && b) || c : " << (!(a && b) || c) << std::endl; // 1. (a && b) 2. !(a&&b) 3.!(a&&b) || c

    return 0;
}