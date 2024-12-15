#include "civilengineer.h"
#include <iostream>

using namespace std;

CivilEngineer::CivilEngineer()
{
    cout << "CivilEngineer default constructor is called..." << endl;
}
CivilEngineer::CivilEngineer(string_view fullname, int age, string_view address, int contract_count, string_view speciality)
    : Engineer(fullname, age, address, contract_count), m_speciality(speciality)
{
    cout << "CivilEngineer custom constructor is called..." << endl;
};

std::ostream &operator<<(std::ostream &out, const CivilEngineer &engineer)
{
    out << "Civil engineer [Full name: " << engineer.get_full_name() << ", Age: " << engineer.get_age() << ", Address: " << engineer.get_address() << ", Speciality: " << engineer.m_speciality << "]";
    return out;
}

CivilEngineer::~CivilEngineer()
{
}