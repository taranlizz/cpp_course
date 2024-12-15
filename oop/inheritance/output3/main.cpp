#include <iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

using namespace std;

// Always provide a default constructor for your classes, especially if they will be part
// of an inheritance hierarchy

int main()
{
    cout << "Person object:" << endl;
    Person person("Jane Smith", 29, "789 Designer Rd, Urban City");
    cout << person << endl;
    cout << endl;

    cout << "Engineer object:" << endl;
    Engineer engineer("Lisa Taylor", 25, "123 Main St, Springfield", 5);
    cout << engineer << endl;
    cout << endl;

    cout << "CivilEngineer object:" << endl;
    CivilEngineer civil_engineer("Alex Johnson", 34, "456 Engineering Ave, Metropolis",
                                 12, "Structural Engineering");
    cout << civil_engineer << endl;
    cout << endl;
}