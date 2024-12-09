#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // std::strcat : concatenation
    cout << "std::strcat : " << endl;

    char dest[50] = "Hello "; // Ensure that dest array is mutable and has a sufficient size number
    char src[50] = "World!";
    strcat(dest, src);
    strcat(dest, " Goodbye World!");
    cout << "dest : " << dest << endl;

    // std::strncat : concatenates n characters from src to dest
    //  and returns a pointer to the result string

    // signature : char *strncat(char *dest, const char *src, size_t count)

    cout << endl;
    cout << "std::strncat" << endl;

    char dest2[50]{"Hello"};
    char src2[31]{" There is a bird on my window."};
    cout << strncat(dest2, src2, 6) << endl;

    // std::strcpy - signature : char* strcpy(char *dest, const char*src);
    cout << endl;
    cout << "std::strcpy : " << std::endl;
    const char *src3 = "C++ is a multipurpose programming language.";
    char *dest3 = new char[strlen(src3) + 1]; // +1 for the null character
                                              // Contains garbage data
                                              // Not initialized
    strcpy(dest3, src3);
    cout << "sizeof(dest3) : " << sizeof(dest3) << endl;
    cout << "strlen(dest3) : " << strlen(dest3) << endl;
    cout << "dest 3 : " << dest3 << endl;

    // std::strncpy : copies n chars from src to dest -
    // signature : char *strncpy (char *dest, const char *src, size_t count)

    cout << endl;
    cout << "std::strncpy" << std::endl;
    const char *src4 = "Hello!";
    char dest4[] = {'a', 'b', 'c', 'd', 'e', 'f', '\0'}; // Put the null terminator char to print out the string

    cout << "dest4 : " << dest4 << endl;

    cout << "Copying..." << endl;
    strncpy(dest4, src4, 5);

    cout << "dest4 : " << dest4 << endl;
}