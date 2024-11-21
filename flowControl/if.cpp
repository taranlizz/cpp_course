#include <iostream>

int main()
{

    int number1{55};
    int number2{60};
    bool result = (number1 < number2); // Expression yielding the condition

    // std::cout << std::boolalpha << "result : " << result << std::endl;

    // std::cout << std::endl;
    // std::cout << "free standing if statement" << std::endl;

    // if (result)
    // {
    //     std::cout << number1 << " is less than " << number2 << std::endl;
    // };

    // if (!result)
    // {
    //     std::cout << number1 << " is NOT less than " << number2 << std::endl;
    // }

    // Using else
    // std::cout << std::endl;
    // std::cout << "using the else clause : " << std::endl;

    // if (result)
    // {
    //     std::cout << number1 << " is less than " << number2 << std::endl;
    // }
    // else
    // {
    //     std::cout << number1 << " is NOT less than " << number2 << std::endl;
    // }

    // Use expression as condition directly
    std::cout << std::endl;
    std::cout << "Using expression as condition : " << std::endl;

    if (number1 < number2)
    {
        std::cout << number1 << " is less than " << number2 << std::endl;
    }
    else
    {
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    }

    return 0;
}