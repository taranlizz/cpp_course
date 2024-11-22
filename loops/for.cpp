#include <iostream>

int main()
{
    // size_t: a representation of some unsigned int for positive numbers
    const size_t COUNT{10};
    for (size_t i{0}; i < COUNT; i++)
    {
        std::cout << i << " Hello, world!" << std::endl;
    };
    return 0;
}