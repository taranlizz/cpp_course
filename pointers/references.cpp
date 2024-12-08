#include <iostream>

using namespace std;

// References VS Pointers

// References:
// -- uses & for declaration
// -- must be initialized when declared
// -- cannot be reassigned to refer to another var
// -- cannot be null
// -- provides simplex syntax for aliasing vars

// Pointer:
// -- uses * for declaration
// -- can be declared without initialization
// -- can be reassigned to point to a different address
// -- can be null
// -- provides more flexibility in managing memory

int main()
{
    int int_value{45};
    double double_value{33.65};

    int &ref_to_int{int_value};   // Assign throughout initialization
    int &ref_to_int1 = int_value; // Assign throughout assignment
    double &ref_to_double = double_value;

    // Modifying data directly: changes reflect initial var and all it's refs

    cout << "int_value: " << int_value << endl;
    cout << "double_value: " << double_value << endl;
    cout << "ref_to_int: " << ref_to_int << endl;
    cout << "ref_to_int1: " << ref_to_int1 << endl;
    cout << "ref_to_double: " << ref_to_double << endl;

    cout << "&int_value: " << &int_value << endl;
    cout << "&double_value: " << &double_value << endl;
    cout << "&ref_to_int: " << &ref_to_int << endl;
    cout << "&ref_to_int1: " << &ref_to_int1 << endl;
    cout << "&ref_to_double: " << &ref_to_double << endl;

    cout << "sizeof(int_value): " << sizeof(int_value) << endl;
    cout << "sizeof(ref_to_int): " << sizeof(ref_to_int) << endl;

    // References vs Pointers

    // Declaration and reading
    // Declaring
    double double1 = 12.35;
    double &ref_to_double1 = double1; // Reference to double val
    double *p_to_double1 = &double1;  // Pointer to double val

    cout << endl;

    // Reading
    cout << "double1 : " << double1 << endl;
    cout << "ref_to_double1 : " << double1 << endl;
    cout << "p_to_double1 : " << p_to_double1 << endl;
    cout << "*p_to_double1 : " << *p_to_double1 << endl;

    // Writing
    cout << endl;

    // Writing through a pointer
    *p_to_double1 = 15.36;

    cout << "Writing through a pointer" << endl;
    cout << "double1 : " << double1 << endl;
    cout << "ref_to_double1 : " << double1 << endl;
    cout << "p_to_double1 : " << p_to_double1 << endl;
    cout << "*p_to_double1 : " << *p_to_double1 << endl;

    // Writing through a reference
    cout << endl;

    ref_to_double1 = 17.48;

    cout << "Writing through a reference" << endl;
    cout << "double1 : " << double1 << endl;
    cout << "ref_to_double1 : " << double1 << endl;
    cout << "p_to_double1 : " << p_to_double1 << endl;
    cout << "*p_to_double1 : " << *p_to_double1 << endl;

    // Can't make a reference refer to something else
    double double2 = 100.5;

    // It doesn't make ref_to_double1 reference double 2
    // it merely changes the value referenced by ref_to_double1 to 100.5
    ref_to_double1 = double2;
    cout << "double1 : " << double1 << endl;
    cout << "ref_to_double1 : " << ref_to_double1 << endl;

    // if you change ref_to_double1, double2 value stays the same.
    ref_to_double1 = 117.82;
    cout << "double1 : " << double1 << endl;
    cout << "double2 : " << double2 << endl;
    cout << "ref_to_double1 : " << ref_to_double1 << endl;

    // A pointer can point somewhere else
    cout << endl;
    cout << "A pointer can point somewhere else : " << endl;

    p_to_double1 = &double2;
    cout << "double1 : " << double1 << endl;
    cout << "ref_to_double1 : " << double1 << endl;
    cout << "p_to_double1 : " << p_to_double1 << endl;
    cout << "*p_to_double1 : " << *p_to_double1 << endl;
    cout << "double2 : " << double2 << endl;

    *p_to_double1 = 138.23;
    cout << "double1 : " << double1 << endl;
    cout << "ref_to_double1 : " << double1 << endl;
    cout << "p_to_double1 : " << p_to_double1 << endl;
    cout << "*p_to_double1 : " << *p_to_double1 << endl;
    cout << "double2 : " << double2 << endl;

    // References behave like constant pointers, but they have much friendlier syntax
    // as they don't require dereferencing to read and write through referenced data

    double *const const_p_double1 = &double1;
    // const_p_double1 = &double2; // Error
}