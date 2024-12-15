#include <iostream>
#include "person.h"

using namespace std;

Person::Person()
{
    cout << "Person default constructor is called..." << endl;
}

Person::Person(string_view fullname, int age, string_view address)
    : m_full_name(fullname), m_age(age), m_address(address)
{
    cout << "Person custom constructor is called..." << endl;
};

// Getters
string Person::get_full_name() const
{
    return m_full_name;
};

int Person::get_age() const
{
    return m_age;
};

string Person::get_address() const
{
    return m_address;
}

std::ostream &operator<<(std::ostream &out, const Person &person)
{
    out << "Person [Full name: " << person.get_full_name() << ", Age: " << person.get_age() << ", Address: " << person.get_address() << "]";
    return out;
}

Person::~Person()
{
}