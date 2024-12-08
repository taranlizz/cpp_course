#include <iostream>

using namespace std;

// Making sure you are working with pointers containing valid memory addresses

int main()
{
    int *p_number{};

    // Verbose nullptr check
    if (p_number != nullptr)
    {
        cout << "p_number points to a VALID address : " << p_number << endl;
    }
    else
    {
        cout << "p_number points to an INVALID address." << endl;
    }

    // Compact nullptr check
    if (p_number)
    {
        cout << "p_number points to a VALID address : " << p_number << endl;
    }
    else
    {
        cout << "p_number points to an INVALID address." << endl;
    }
}