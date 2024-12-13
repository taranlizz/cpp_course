#include <iostream>

using namespace std;

const double PI = 3.14159265358979323846;

// Member variables and methods are private by default (accessible only inside the class)

// Key concepts OOP:
// Classes and Objects:
// Class - a blueprint for creating objects, defines the data members(attributes) and member functions(methods)
// Object - an instance of a class. It contains the actual values of the attributes and can call the methods.

// Class member variables can either be raw stack variables or pointers.
// Members can't be references.
// Classes have functions (methods) that let them do things.
// Class methods have access to the member variables, regardless of whether they are public or private.
// Private members of classes (vars and funcs) aren't accessible from the outside of the class definition

class Cylinder
{
    // Member variables (fields, properties)
public:
    double base_radius = 1;
    double height = 1;

    // Member methods
public:
    double volume()
    {
        return PI * base_radius * base_radius * height;
    }
};

// int main()
// {
//     Cylinder cylinder1; // Objects

//     cout << "volume: " << cylinder1.volume() << endl;
//     // cout << "base_radius: " << cylinder1.base_radius << endl;
//     // cout << "height: " << cylinder1.height << endl;

//     // Change the member variables
//     cylinder1.base_radius = 10;
//     cylinder1.height = 3;

//     cout << "volume: " << cylinder1.volume() << endl;
// }