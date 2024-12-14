#include <iostream>
#include "dog.h"

using namespace std;

// Each class member function contains a hidden pointer called this.
// That pointer contains the address of the current object, for which the method is being executed.
// This also applies to constructors and destructors.

// int main()
// {
//     Dog *mickey = new Dog("Mickey", "Corgi", 2);
//     mickey->print_info();

//     cout << endl;
//     cout << "after chained call :" << endl;

//     // Pointer version
//     // mickey->set_name("Shark")->set_breed("Pit Bull")->set_age(3);

//     // Reference version
//     mickey->set_name("Shark").set_breed("Pit Bull").set_age(2);
//     mickey->print_info();

//     delete mickey;
// }
