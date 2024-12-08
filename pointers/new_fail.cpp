#include <iostream>

using namespace std;

// In some rare cases, the 'new' operator will fail to allocate dynamic memory from the heap.
// When that happens, and you have no mechanism in place to handle that failure, an exception will be thrown and the program will crash.

int main()
{
    // int *lots_of_ints = new int[100000000000000000000]; //ERROR: array is too large

    // Handling the exception

    // Handle the problem in a way that makes sense for you app.
    // for (size_t i{}; i < 100; i++)
    // {
    //     try
    //     {
    //         int *lots_of_ints1{new int[1000000000]};
    //     }
    //     catch (const exception &e)
    //     {
    //         std::cerr << e.what() << '\n';
    //     }
    // }

    // std::notrow : ideal if you don't want exceptions thrown when new fails
    for (size_t i{}; i < 100; i++)
    {
        int *lots_of_ints2{new (nothrow) int[10000000000]};
        if (lots_of_ints2 == nullptr)
        {
            cout << "Memory allocation failed" << endl;
        }
        else
        {
            cout << "Memory allocation succeed" << endl;
        }
    }
}