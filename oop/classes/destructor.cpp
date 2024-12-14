#include <iostream>
#include "dog.h"

// The destructors are called in weird places that may not be obvious
// -- when an object is passed by value to function
// -- when a local object is returned from a function(for some compilers)
// Obvious cases are:
// -- when a local stack object goes out of scope(dies)
// -- when a heap object is released with delete

void some_func(Dog dog_param)
{
}

int main()
{
    Dog my_dog("Mickey", "Corgi", 2);
    Dog my_dog1("Peach", "Corgi", 2);
    Dog my_dog2("Shark", "Pit Bull", 2);
    Dog my_dog3("Budha", "Pit Bul", 1);
    std::cout << "Done!" << std::endl;
}