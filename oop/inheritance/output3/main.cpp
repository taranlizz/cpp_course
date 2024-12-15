#include <iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

using namespace std;

// Always provide a default constructor for your classes, especially if they will be part
// of an inheritance hierarchy

int main()
{
    Engineer engineer("Lisa Taylor", 25, "123 Main St, Springfield", 5);
    cout << engineer << endl;

    CivilEngineer civil_engineer("Alex Johnson", 34, "456 Engineering Ave, Metropolis",
                                 12, "Structural Engineering");

    cout << civil_engineer << endl;
}