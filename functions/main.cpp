#include <iostream>
#include "compare.h" //Preprocessor

// Sometimes it's more flexible to split the function into it's header and body
// and keep the code for each in different places

// The prototype needs to come BEFORE the function call in your life.

int main(int argc, char **argv)
{
    int max_num = max(45, 67);
    std::cout << "max : " << max_num << std::endl;

    int min_num = min(68, 73);
    std::cout << "min : " << min_num << std::endl;
}
