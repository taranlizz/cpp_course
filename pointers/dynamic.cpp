#include <iostream>

using namespace std;

// Stack:
//-- used for function call management, local variables
//-- managed automatically by the compiler
//-- memory is allocated and deallocated as functions are called and returned
//-- grows downward in memory
//-- limited by the system's stack size
//-- data persists only during the function's execution (lifetime is controlled by the scope mechanism)

// Heap:
//-- used for dynamic memory allocation at runtime
//-- managed explicitly by the programmer(new/delete)
//-- grows upward in memory
//-- limited by the amount of available RAM
//-- data persists until explicitly deallocated (or the program terminates)

int main()
{
    // Initialize the pointer with dynamic memory.
    // Dynamically allocate memory at run time and make a pointer point to it.

    int *p_number{nullptr};
    p_number = new int;

    // Dynamically allocate space for a single int on the heap
    // This memory belongs to our program for now on.
    // The system can't use it for anything else, until we return it.
    // After this line executes, we will have a valid memory location allocated.
    // The size of the allocated memory will be such that it can store the type pointed to by the pointer.

    *p_number = 77;
    cout << "p_number value: " << *p_number << endl;

    // Releasing and resetting
    delete p_number; // Releasing
    //*p_number = 45; //CRASH! Don't write into the memory that does not belong to our program anymore
    p_number = nullptr; // Resetting
    // p_number is available to work with after resetting
    p_number = new int{55};
    cout << "p_number value after resetting: " << *p_number << endl;

    delete p_number;
    p_number = nullptr;

    // It is also possible to initialize the pointer with a valid address up on declaration.
    // Not with a nullptr
    int *p_number1{new int};     // Memory allocated but uninitialized and contains junk value
    int *p_number2{new int(22)}; // Memory allocated and initialized with 22
    int *p_number3{new int{23}}; // Memory allocated and initialized with 23

    cout << "p_number1: " << p_number1 << endl;
    cout << "*p_number1: " << *p_number1 << endl;

    cout << "p_number2: " << p_number2 << endl;
    cout << "*p_number2: " << *p_number2 << endl;

    cout << "p_number3: " << p_number3 << endl;
    cout << "*p_number3: " << *p_number3 << endl;

    // Remember to release the memory
    delete p_number1;
    p_number1 = nullptr;

    delete p_number2;
    p_number2 = nullptr;

    delete p_number3;
    p_number3 = nullptr;

    // MISTAKES
    //  Calling delete on a pointer twice will lead to mistakes and undefined behavior.

    // p_number3 = new int{77};
    // cout << "BEFORE deleting twice" << endl;
    // cout << "p_number3: " << p_number3 << endl;
    // cout << "*p_number3: " << *p_number3 << endl;

    // delete p_number3;
    // delete p_number3; //CRASH
    // p_number3 = nullptr;

    // cout << "AFTER deleting twice" << endl;
    // cout << "p_number3: " << p_number3 << endl;
    // cout << "*p_number3: " << *p_number3 << endl;

    // Writing into uninitialized pointer through dereference
    // int *p_number4; // Contains junk address: can be anything
    // cout << "Writing in the 55" << endl;

    // *p_number4 = 55; //CRASH
    // cout << "Writing into uninitialized pointer through dereference" << endl;

    // Writing into invalid pointer
    //  cout << "Writing into nullptr memory" << endl;
    //  int *p_number5{}; // Equivalent of initialization to nullptr -- pointer pointing nowhere;
    //  *p_number5 = 33;  // Writing into a pointer pointing nowhere: CRASH

    // cout << "Done writing" << endl;
}