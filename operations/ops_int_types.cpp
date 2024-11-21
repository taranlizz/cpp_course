#include <iostream>

int main()
{
    // arithmetic operations are only available on types that take >= 4 bytes in memory
    short int var1{10};
    short int var2{20};

    char var3{40};
    char var4{50};

    std::cout << "size of var1 : " << sizeof(var1) << std::endl;
    std::cout << "size of var2 : " << sizeof(var2) << std::endl;
    std::cout << "size of var3 : " << sizeof(var3) << std::endl;
    std::cout << "size of var4 : " << sizeof(var4) << std::endl;

    // result is implicitly converted to integer
    auto result1 = var1 + var2;
    auto result2 = var3 + var4;

    std::cout << "size of result1 : " << sizeof(result1) << std::endl;
    std::cout << "size of result2 : " << sizeof(result2) << std::endl;
    return 0;
}