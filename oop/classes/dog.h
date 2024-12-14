#ifndef DOG_H
#define DOG_H

#include <string>

using namespace std;

using std::string, std::string_view;

// Destructor is a special method that is called when object dies.
// It is needed when the object needs to release some dynamic memory,
// or for some other kind of clean up.

class Dog
{
public:
    // Constructors
    Dog();
    Dog(string_view name, string_view breed, int age);

    // Destructors
    ~Dog();

    // Methods
    void print_info();

    // Using pointers
    //  Dog *set_name(string_view name);

    // Dog *set_breed(string_view breed);

    // Dog *set_age(int age);

    // Using references
    Dog &set_name(string_view name);

    Dog &set_breed(string_view breed);

    Dog &set_age(int age);

private:
    string name;
    string breed;
    int *p_age{nullptr};
};

#endif