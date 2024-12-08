#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    // Check if character is alphanumeric
    cout << "std::isalnum : " << endl;
    cout << "C is alphanumeric : " << isalnum('C') << endl;
    cout << "^ is alphanumeric : " << isalnum('^') << endl;

    // Can use this as a test condition
    char input_char{'C'};
    if (isalnum(input_char))
    {
        cout << input_char << " is alphanumeric." << endl;
    }
    else
    {
        cout << input_char << " is not alphanumeric." << endl;
    }

    // Check if a character is alphabetic
    cout << "std::isalpha : " << endl;
    cout << "C is alphabetic : " << isalpha('C') << endl;
    cout << "^ is alphabetic : " << isalpha('^') << endl;
    cout << "7 is alphabetic : " << isalpha('7') << endl;

    // Check if a character is blank
    cout << "std::isblank : " << endl;
    char message[]{"Hello there. How are you doing? The sun is shining."};
    cout << "message : " << message << endl;

    // Find and print blank index
    int blank_count{};
    for (size_t i{0}; i < size(message); i++)
    {
        if (isblank(message[i]))
        {
            cout << "Found a blank char at index : [" << i << "]" << endl;
            blank_count++;
        }
    }
    cout << "In total we found " << blank_count << " blank characters." << endl;

    // Check if character is lowercase or uppercase
    cout << endl;
    char thought[]{"The C++ Programming Language is one of the most used on the planet."};

    int lowercase_count{};
    int uppercase_count{};

    cout << "Original string: " << thought << endl;
    for (auto character : thought)
    {
        if (islower(character))
        {
            lowercase_count++;
        }
        else
        {
            uppercase_count++;
        }
    }

    cout << "Found " << lowercase_count << " lowercase characters and " << uppercase_count << " uppercase characters." << endl;

    // Check if a character is a digit
    cout << endl;
    cout << "std::isdigit" << endl;

    char lyrics[]{"'Baby, I don't feel so good', 6 words you never understood. 'I'll never let you go', 5 words you'll never say. I laugh along like nothing's wrong, 4 days has never felt so long. If 3's a crowd and 2 was us, 1 slipped away."};

    int digit_count{};

    for (auto character : lyrics)
    {
        if (isdigit(character))
        {
            digit_count++;
        }
    }

    cout << "Found " << digit_count << " digit characters.";

    // Turn a character to lowercase using std::tolower() function

    cout << endl;
    cout << "std::tolower and std::toupper: " << endl;
    char original_str[]{"Home. The feeling of belonging."};
    const int size_str = size(original_str);
    char dest_str[size_str];

    // Turn this to uppercase. Change the array in place
    for (size_t i{}; i < size_str; i++)
    {
        dest_str[i] = toupper(original_str[i]);
    }

    cout << "Original : " << original_str << endl;
    cout << "Uppercase : " << dest_str << endl;

    for (size_t i{}; i < size_str; i++)
    {
        dest_str[i] = tolower(original_str[i]);
    }
    cout << "Lowercase : " << dest_str << endl;
}