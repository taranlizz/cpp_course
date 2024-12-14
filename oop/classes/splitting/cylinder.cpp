#include <stdexcept>
#include "constants.h"
#include "cylinder.h"

using namespace std;

Cylinder::Cylinder(double radius_param, double height_param)
{
    base_radius = radius_param;
    height = height_param;
}

double Cylinder::volume()
{
    return PI * base_radius * base_radius * height;
}

// getters
double Cylinder::get_base_radius()
{
    return base_radius;
}

double Cylinder::get_height()
{
    return height;
}

// setters
void Cylinder::set_base_radius(double radius_param)
{
    if (radius_param < 0)
    {
        throw invalid_argument("Invalid value for radius.");
    };
    base_radius = radius_param;
}

void Cylinder::set_height(double height_param)
{
    if (height_param < 0)
    {
        throw invalid_argument("Invalid value for height.");
    };
    height = height_param;
}
