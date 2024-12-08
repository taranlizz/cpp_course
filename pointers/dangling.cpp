#include <iostream>

using namespace std;

// Dangling pointer is a pointer that doesn't point to a valid memory address.
// Trying to dereference and use a dangling pointer will result in unexpected behavior.

// Dangling pointers cases:
// 1. uninitialized pointer
// 2. deleted pointer
// 3. pointers pointing to the same location

// Solutions:
// 1. initialize your pointers
// 2. reset pointers after delete
// 3. for multiple pointers to same address, make sure the owner pointer is very clear

int main()
{
    // THE PROBLEM
    //  Case1: uninitialized pointer
    int *p_number;

    cout << "Case1: uninitialized pointer " << endl;
    cout << "p_number : " << p_number << endl;
    // cout << "*p_number : " << *p_number << endl; // CRASH

    // Case2: deleted pointer
    cout << "Case2: deleted pointer " << endl;
    int *p_number1 = new int{65};

    cout << "p_number1 (before delete) : " << *p_number1 << endl;
    delete p_number1;

    cout << "p_number1 (after delete) : " << *p_number1 << endl; // JUNK VALUE

    // Case3: multiple pointers pointing to the same address
    cout << "Case3: multiple pointers pointing to the same address" << endl;
    int *p_number2 = new int{85};
    int *p_number3 = p_number2;

    cout << "p_number2 -" << p_number2 << " - " << *p_number2 << endl;
    cout << "p_number3 -" << p_number3 << " - " << *p_number3 << endl;

    delete p_number2;

    // p_number3 points to deleted memory.
    // Dereferencing it will lead to undefined behavior.

    cout << "p_number3 (after deleting p_number2) -" << p_number3 << " - " << *p_number3 << endl;

    // SOLUTIONS
    cout << endl;

    // Solution1: initialize pointers immediately upon declaration
    cout << "Solution 1: " << endl;
    int *p_number4 = new int{55};
    if (p_number4 != nullptr)
    {
        cout << "*p_number4 : " << *p_number4 << endl;
    }

    // Solution2:
    // Right after you call delete on a pointer, remember to reset it

    cout << endl;
    cout << "Solution 2: " << endl;

    int *p_number5 = new int{77};
    cout << "*p_number5 :" << p_number5 << " - " << *p_number5 << endl;

    delete p_number5;
    p_number5 = nullptr;

    // Solution3:
    // For multiple pointers pointing to the same address
    //  make sure there is one clear pointer (master pointer) that owns the memory (responsible for releasing when it's necessary),
    // other pointers should only be able to dereference when the master pointer is valid
    int *p_number6 = new int{382}; // the master pointer;
    int *p_number7 = p_number6;

    // Dereference the pointers and use them
    cout << "p_number6 - " << p_number6 << " - " << *p_number6 << endl;

    if (p_number6 != nullptr)
    { // Only use slave pointers when master pointer is valid
        cout << "p_number7 - " << p_number7 << " - " << *p_number7 << endl;
    }

    delete p_number6;
    p_number6 = nullptr;

    if (p_number6 != nullptr)
    { // Only use slave pointers when master pointer is valid
        cout << "p_number7 - " << p_number7 << " - " << *p_number7 << endl;
    }
    else
    {
        cerr << "WARNING: Trying to use an invalid pointer" << endl;
    }
}