#include <iostream>
#include <stdexcept>

using namespace std;

// Getters and setters are methods to read and modify member variables of a class
// Using setters and getters instead of making fields directly public is a key principle in OOP.
// Encapsulation helps protect and manage access to an object's internal state, ensuring that fields are used safely.
// It emphasizes that internal details of a class should be hidden, and access should be provided through controlled interfaces.

class Cylinder
{
private:
    double base_radius;
    double height;

public:
    // constructors
    Cylinder() = default;
    Cylinder(double radius_param, double height_param)
    {
        base_radius = radius_param;
        height = height_param;
    }
    // getters
    double get_base_radius()
    {
        return base_radius;
    }
    double get_height()
    {
        return height;
    }

    // setters
    void set_base_radius(double radius_param)
    {
        if (radius_param < 0)
        {
            throw invalid_argument("Invalid value for radius.");
        };
        base_radius = radius_param;
    }
    void set_height(double height_param)
    {
        if (height_param < 0)
        {
            throw invalid_argument("Invalid value for height.");
        };
        height = height_param;
    }
};

int main()
{
    Cylinder cylinder(22, 25);
    cout << "base_radius: " << cylinder.get_base_radius() << endl;
    cout << "height: " << cylinder.get_height() << endl;

    cylinder.set_base_radius(2);
    cout << "base_radius: " << cylinder.get_base_radius() << endl;

    cylinder.set_height(1);
    cout << "height: " << cylinder.get_height() << endl;
}