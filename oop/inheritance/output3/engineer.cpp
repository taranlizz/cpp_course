#include "engineer.h"
#include <iostream>

using namespace std;

Engineer::Engineer()
{
    cout << "Engineer constructor is called..." << endl;
}

Engineer::Engineer(string_view fullname, int age, string_view address, int contract_count)
    : Person(fullname, age, address), contract_count(contract_count) {};

std::ostream &operator<<(std::ostream &out, const Engineer &engineer)
{
    out << "Engineer [Full name: " << engineer.get_full_name() << ", Age: " << engineer.get_age() << ", Address: " << engineer.get_address() << ", Contract count: " << engineer.contract_count << "]";
    return out;
}

Engineer::~Engineer()
{
}