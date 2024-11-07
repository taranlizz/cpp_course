#include <iostream>

int main()
{
    auto var1{12};
    auto var2{13.0};
    auto var3{14.0f};
    auto var4{15.0l};
    auto var5{'e'};

    std::cout << "sizeof(var1) : " << sizeof(var1) << std::endl;
    std::cout << "sizeof(var2) : " << sizeof(var2) << std::endl;
    std::cout << "sizeof(var3) : " << sizeof(var3) << std::endl;
    std::cout << "sizeof(var4) : " << sizeof(var4) << std::endl;
    std::cout << "sizeof(var5) : " << sizeof(var5) << std::endl;

    return 0;
}