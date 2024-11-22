#include <iostream>

int main()
{
    int a{35};
    int b{20};

    // int max{};
    // max = (a > b) ? a : b;

    int max{(a > b) ? a : b};

    std::cout << "max : " << max << std::endl;
    return 0;
}