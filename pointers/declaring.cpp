#include <iostream>

using namespace std;

int main()
{
    // Declaring pointers
    int *p_number{}; // can only store an address of a variable of type int

    double *p_frac_number{}; // can only store an address of a variable of type double

    // Explicitly initialize to nullptr
    // indicating that a pointer does not point to any valid object
    int *p_number1{nullptr};
    int *p_frac_number1{nullptr};

    // All pointer variables have the same size
    cout << "Size of number pointer : " << sizeof(p_number) << endl;
    cout << "Size of integer : " << sizeof(int) << endl;
    cout << "Size of frac_number pointer : " << sizeof(p_frac_number) << endl;
    cout << "Size of double : " << sizeof(double) << endl;

    cout << "Size of number1 pointer : " << sizeof(p_number) << endl;
    cout << "Size of integer : " << sizeof(int) << endl;
    cout << "Size of frac_number1 pointer : " << sizeof(p_frac_number) << endl;
    cout << "Size of double : " << sizeof(double) << endl;

    // Initializing pointers and assigning them data
    int int_var{43};
    int *p_int{&int_var}; // The address-of operator(&)

    cout << "int_var : " << int_var << endl;
    cout << "p_int : " << p_int << endl;

    // You can also change the address stored in a pointer any time
    int int_var1{65};

    p_int = &int_var1;

    cout << "p_int(another address) : " << p_int << endl;

    // Pointer only stores the type for which it was declared
    int *p_int1{nullptr};
    double double_var{33};

    // p_int = &double_var; - Compile error

    // Dereferencing a pointer:
    int *p_var2{nullptr};
    int int_data{56};
    p_var2 = &int_data;

    cout << "The value of int data: " << *p_var2 << endl;
    return 0;
}