#include <iostream>
#include <string>
#include "dog.h"

using namespace std;

Dog::Dog()
{
    name = "None";
    breed = "None";
    p_age = new int; // Dynamic memory allocation
    *p_age = 0;
}

Dog::Dog(string_view name_param, string_view breed_param, int age_param)
{
    name = name_param;
    breed = breed_param;
    p_age = new int; // Dynamic memory allocation
    *p_age = age_param;
    cout << "Dog constructor is called for " << name << endl;
}

Dog::~Dog()
{
    delete p_age;
    cout << "Dog destructor is called for " << name << endl;
}