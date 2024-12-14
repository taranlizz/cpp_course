#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder
{
private:
    double base_radius;
    double height;

public:
    // constructors
    Cylinder() = default;
    Cylinder(double radius_param, double height_param);
    // getters
    double get_base_radius();
    double get_height();

    // setters
    void set_base_radius(double radius_param);
    void set_height(double height_param);

    // Methods
    double volume();
};

#endif