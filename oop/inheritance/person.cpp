#include "person.h"

Person::Person()
{
}

Person::Person(std::string_view first, std::string_view last)
    : first_name(first), last_name(last) {};

std::ostream &operator<<(std::ostream &out, const Person &person)
{
    out << "Person [" << person.first_name << " " << person.last_name << ']';
    return out;
}
