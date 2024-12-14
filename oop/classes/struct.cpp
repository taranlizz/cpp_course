#include <iostream>

// Members are private by default
class Shark
{
    std::string m_name;
};

// Members are public by default
struct Cat
{
    std::string m_name;
};

struct Point
{
    double x;
    double y;
};

int main()
{
    Shark shark1;
    Cat cat1;

    Point point1;
    point1.x = 25;
    point1.y = 12;

    // dog1.m_name = "Shark"; // Compiler Error
    cat1.m_name = "Peach";
}
