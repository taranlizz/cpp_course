#include <iostream>

int main()
{
    char message[6]{
        'H', 'e', 'l', 'l', 'o'}; // message[6] is null terminator /0;

    std::cout << "message : ";
    for (auto c : message)
    {
        std::cout << c;
    }
    std::cout << std::endl;
    std::cout << "size : " << std::size(message) << std::endl;

    // Can also modify elements of the char array

    std::cout << std::endl;
    std::cout << "Modify array data : " << std::endl;

    message[0] = 'h';

    std::cout << "message (print after modifying) : ";
    for (auto c : message)
    {
        std::cout << c;
    }

    // Can print char array as a complete string
    std::cout << std::endl;
    std::cout << "message (print as a string) : " << message << std::endl;

    // Can also define a literal C string
    std::cout << std::endl;
    char message2[]{"Hello World!"};

    std::cout << "message2 (print as a literal string) : " << message2 << std::endl;
    std::cout << "message2 size: " << std::size(message2) << std::endl;
    return 0;
}