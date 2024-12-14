#include <iostream>
#include "constants.h"
#include "cylinder.h"

using namespace std;

int main(int argc, char **argv)
{
    // Stack object : . notation
    Cylinder c1(23, 45);
    cout << "volume c1: " << c1.volume() << endl;

    // Managing a stack object through pointers
    Cylinder *p_c1 = &c1;

    cout << "volume c1 (pointers): " << (*p_c1).volume() << endl;
    cout << "volume c1 (pointers): " << p_c1->volume() << endl;
    // Heap object : (. dereference) and . notation
    //               . -> notation
    Cylinder *c2 = new Cylinder(11, 20); // Create an object on heap
    cout << "volume c2 :" << (*c2).volume() << endl;
    cout << "volume c2 :" << c2->volume() << endl;

    delete c2; // Release the memory from heap
}