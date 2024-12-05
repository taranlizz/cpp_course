#include <iostream>

using namespace std;

int main()
{
    char *p_char_var{nullptr};
    char char_var{'A'};

    p_char_var = &char_var;

    cout << "The value stored in p_char_var is : " << *p_char_var << endl;

    char char_var1{'C'};
    p_char_var = &char_var1;
    cout << "The value stored in p_char_var is : " << *p_char_var << endl;

    // It is possible to initialize a char pointer with a string literal: C-string
    // char *p_message{"Hello, world!"}; // COMPILER WARNING
    // The string literal is made up of const char. You should not modify any of them.

    const char *p_message{"Hello, world!"}; // CORRECT

    char message1[]{"Hello, world!"}; // The mutable string literal
    message1[0] = 'B';

    // Printing out
    // What do we get when we print this out with cout
    cout << "The message is : " << p_message << endl;
    cout << "The message1 is : " << message1 << endl;

    // IMPORTANT! p_message DOES NOT store the entire string literal.
    //  it stores the address of the first character in the string.
    // cout traverses memory locations starting from the address stored
    // in p_message, continuing until it reaches the null terminator character.

    cout << "The real value of p_message: " << *p_message << endl;

    return 0;
}