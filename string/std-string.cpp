#include <iostream>
#include <string>

using namespace std;

int main()
{
    string full_name;                              // Empty string
    string planet{"Earth. Where the sky is blue"}; // Initialize with string literal
    string preferred_planet{planet};               // Initialize with other existing string
    string message{"Hello there", 5};              // Initialize with part of a string literal

    string weird_message{4, 'e'}; // Initialize with multiple copies of a char

    string greeting{"Hello World"};
    string saying_hello{greeting, 6, 5}; // Initialize with part of an existing string
                                         // starting at index 6, taking 5 chars.

    cout << "full_name : " << full_name << endl;
    cout << "planet : " << planet << endl;
    cout << "preferred_planet : " << preferred_planet << endl;
    cout << "message : " << message << endl;
    cout << "weird_message : " << weird_message << endl;
    cout << "greeting : " << greeting << endl;
    cout << "saying_hello : " << saying_hello << endl;
}