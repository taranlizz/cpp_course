#include <iostream>

int main()
{
    // Declaring an array
    int scores[10]; // An array stpring 10 integers

    // Writing data in array manually
    scores[0] = 20;
    scores[1] = 21;

    // Writing data using a loop
    for (size_t i{0}; i < 10; i++)
    {
        scores[i] = i * 3;
    }

    // Can read through a loop
    for (size_t i{0}; i < 10; i++)
    {
        std::cout << "scores[" << i << "] : " << scores[i] << std::endl;
    }

    // Declare and initialize at the same time
    double salaries[5]{12.7, 7.5, 13.2, 8.1, 9.3};

    for (size_t i{0}; i < 5; i++)
    {
        std::cout << "salary[" << i << "] : " << salaries[i] << std::endl;
    }

    // If you don't initialize all the elements, those you leave out are initialized to 0;
    int families[5]{12, 7, 5};
    for (size_t i{0}; i < 5; i++)
    {
        std::cout << "family[" << i << "] : " << families[i] << std::endl;
    };

    // Range-based for loop
    int class_sizes[]{10, 12, 15, 16, 17, 18};
    for (auto size : class_sizes)
    {
        std::cout << "size : " << size << std::endl;
    }

    // Constant arrays, can't be modified
    const int multipliers[]{22, 30, 15};
    // multipliers[1] = 20; => ERROR
    return 0;
}