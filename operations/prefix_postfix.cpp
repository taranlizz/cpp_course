#include <iostream>

int main()
{
    int value{5};

    // Increment by one (compound operators)
    value += 1;
    std::cout << "The value is : " << value << std::endl;

    value = 5; // Reset to 5

    // Decrement by one (compound operators)
    value -= 1;
    std::cout << "The value is : " << value << std::endl;

    std::cout << std::endl;

    // Post-increment
    value = 5;

    std::cout << "The value is (incrementing) : " << value++ << std::endl;
    std::cout << "The value is : " << value << std::endl;

    std::cout << std::endl;

    // Post decrement
    value = 5;

    std::cout << "The value is (decrementing) : " << value-- << std::endl;
    std::cout << "The value is : " << value << std::endl;

    std::cout << std::endl;

    // Pre-increment
    value = 5;

    std::cout << "The value is (incrementing) : " << ++value << std::endl;

    std::cout << std::endl;

    // Pre-decrement
    value = 5;

    std::cout << "The value is (decrementing) : " << --value << std::endl;

    std::cout << std::endl;

    return 0;
}