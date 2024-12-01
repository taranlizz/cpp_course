#include <iostream>

int main()
{
    int scores[]{1, 2, 3, 4, 5, 6, 7, 8, 9};
    // Can get the size with std::size (C++17)
    std::cout << "scores size: " << std::size(scores) << std::endl;

    // Classic way of calculating the length of an array
    std::cout << "scores size(classic): " << (sizeof(scores) / sizeof(scores[0])) << std::endl;

    // Print data out
    for (size_t i{0}; i < std::size(scores); i++)
    {
        std::cout << "scores[" << i << "] : " << scores[i] << std::endl;
    }

    return 0;
}