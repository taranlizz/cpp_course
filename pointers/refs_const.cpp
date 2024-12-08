#include <iostream>

using namespace std;

int main()
{
    int age = 30;
    const int &ref_age = age;

    cout << "age: " << age << endl;
    cout << "ref_age: " << ref_age << endl;

    // Try to modify through const reference
    //  ref_age = 35; //Error

    // Can achieve the same thing as const ref with pointer:
    // const pointer to const data
    // Remember that a reference by default is just like a const pointer.
    // All we need to do is make the const pointer point to const data

    const int *const const_ptr_to_const_age = &age;
    // *const_ptr_to_const_age = 42; //Error
}