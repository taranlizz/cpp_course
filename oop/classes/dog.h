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
    Dog();
    Dog(string_view name_param, string_view breed_param, int age_param);
    ~Dog();

private:
    string name;
    string breed;
    int *p_age{nullptr};
};

#endif