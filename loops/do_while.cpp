#include <iostream>

int main()
{
    const size_t COUNT{10};
    size_t i{0};

    do
    {
        std::cout << i << " Hello, world!" << std::endl;
        i++;
    } while (i < COUNT);

    return 0;
}