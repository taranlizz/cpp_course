#include <iostream>
#include <string>

int main()
{
    // Printing data

    /*    std::cout << "Hello C++20" << std::endl;

    std::cerr << "Error message : Something is wrong" << std::endl;
    std::clog << "Log message : Something happened" << std::endl;*/

    // Data input
    /*
    int age;
    std::string name;

    std::cout << "Please type your name and age: " << std::endl;

    std::cin >> name;
    std::cin >> age;

    std::cout << "Hello, " << name << ". You are " << age << " years old!" << std::endl;*/

    // Data with spaces
    std::string fullName;
    int age1;

    std::cout << "Please type your name and age: " << std::endl;
    std::getline(std::cin, fullName);

    std::cin >> age1;

    std::cout << "Hello, " << fullName << ". You are " << age1 << " years old!" << std::endl;

    return 0;
}