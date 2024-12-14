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
    cout << "Dog: " << name << " constructed at " << this << endl;
}

Dog::Dog(string_view name, string_view breed, int age)
{
    this->name = name;
    this->breed = breed;
    p_age = new int; // Dynamic memory allocation
    *p_age = age;
    cout << "Dog: " << name << " constructed at " << this << endl;
    cout << "Dog constructor is called for " << name << endl;
};

Dog::~Dog()
{
    delete p_age;
    cout << "Dog destructor is called for " << name << endl;
}

void Dog::print_info()
{
    cout << "Dog's name " << name << endl;
    cout << "Dog's breed " << breed << endl;
    cout << "Dog's age " << *p_age << endl;
}

// Using pointers
//  Dog *Dog::set_name(string_view name)
//  {
//      this->name = name;
//      return this;
//  }

// Dog *Dog::set_breed(string_view breed)
// {
//     this->breed = breed;
//     return this;
// }

// Dog *Dog::set_age(int age)
// {
//     *p_age = age;
//     return this;
// }

// Using references
Dog &Dog::set_name(string_view name)
{
    this->name = name;
    return *this;
}

Dog &Dog::set_breed(string_view breed)
{
    this->breed = breed;
    return *this;
}

Dog &Dog::set_age(int age)
{
    *p_age = age;
    return *this;
}