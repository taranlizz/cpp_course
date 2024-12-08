#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // std::strlen : Find the length
    const char message1[]{"The sky is blue."};

    const char *message2{"The sky is blue."};
    cout << message1 << endl;

    // strlen ignores null character
    cout << "strlen(message1) : " << strlen(message1) << endl;
    // includes the null character
    cout << "sizeof(message1) : " << sizeof(message1) << endl;
    // strlen still works with decayed arrays
    cout << "strlen(message2) : " << strlen(message2) << endl;
    // prints size of the pointer
    cout << "sizeof(message2) : " << sizeof(message2) << endl;

    // std::strcmp - signature : int strcmp (const char *lhs, const char *rhs);
    // Returns:
    // -- negative value if lhs appears before rhs in lexicographical order,
    // -- zero if lhs and rhs are equal
    // -- positive value if lhs appears after rhs in lexicographical order

    cout << endl;
    cout << "std::strcmp : " << endl;

    const char *string1{"apple"};
    const char *string2{"banana"};

    // Print out the comparison
    cout << "srtcmp (" << string1 << "," << string2 << ") : "
         << strcmp(string1, string2) << endl;

    cout << endl;

    // std::strncmp : int strncmp(const char *lhs, const char *rhs, std::size_t count);
    // Compares n characters in the strings
    // Returns:
    // -- negative value if lhs appears before rhs in lexicographical order,
    // -- zero if lhs and rhs are equal, or if count is zero
    // -- positive value if lhs appears after rhs in lexicographical order

    size_t n{2};
    cout << "std::strncmp : " << endl;

    string1 = "abple";
    string2 = "abnana";

    cout << "srtcmp (" << string1 << "," << string2 << "," << n << ") : "
         << strncmp(string1, string2, n) << endl;

    // std::strchr : find first occurrence of a character
    cout << endl;
    cout << "std::strchr : " << endl;

    // we use std::strchr to find all the characters one by one
    // std::strchr : const char* strrchr(const char* str, int ch)

    const char *str = "Try not. Do, or do not. There is no try.";
    char target = 'T';
    const char *result = str;
    int iterations = 0;

    while ((result = strchr(result, target)) != nullptr)
    {
        cout << "Found '" << target << "' starting at '" << result << "'\n";
        result++;
        iterations++;
    }

    cout << "Iterations: " << iterations << endl;
    cout << endl;

    // std::strrchr : find last occurrence
    cout << "std::strrchr : " << endl;
    char input[] = "/home/user/hello.c";
    char *output = strrchr(input, '/');
    if (output)
        cout << output + 1 << endl;
}