#include <iostream>

// This syntax constrains the auto parameters you pass in
// to comply with the std::integral concept

std::integral auto add(std::integral auto a, std::integral auto b)
{
    return a + b;
}

int main()
{
    // Constrain declared auto var
    std::integral auto x = add(10, 20);
    // std::floating_point auto x = add(10, 20); // Error
    std::cout << "x : " << x << std::endl;
}