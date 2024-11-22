#include <iostream>

const int Pen{10};
const int Marker{20};
const int Eraser{30};
const int Rectangle{40};

int main()
{
    int tool{20};

    // condition: integral types and enums
    switch (tool)
    {
    case Pen:
        std::cout << "Active tool is pen" << std::endl;
        break;
    case Marker:
        std::cout << "Active tool is marker" << std::endl;
        break;
    case Eraser:
        std::cout << "Active tool is eraser" << std::endl;
        break;
    case Rectangle:
        std::cout << "Active tool is rectangle" << std::endl;
        break;
    default:
        std::cout << "Unknown type of tool:(" << std::endl;
        break;
    }
    return 0;
}