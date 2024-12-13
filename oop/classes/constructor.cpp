#include <iostream>

using namespace std;

const double PI = 3.14159265358979323846;

// Constructors are a special kind of method that is called when an instance of a class is created:
// -- no return type
// -- same name as the class
// -- can have parameters/empty parameter list
// -- usually used to initialize member variables of the class

class Cylinder
{
private:
    double base_radius = 0;
    double height = 0;

public:
    // Constructors
    // Cylinder()
    // {
    //     base_radius = 2.0;
    //     height = 2.0;
    // }

    // Default constructor
    Cylinder() = default;

    Cylinder(double radius_par, double height_par)
    {
        base_radius = radius_par;
        height = height_par;
    }

    // Methods
    double volume()
    {
        return PI * base_radius * base_radius * height;
    }
};

int main()
{
    Cylinder cylinder1;
    cout << "volume : " << cylinder1.volume() << endl;
}