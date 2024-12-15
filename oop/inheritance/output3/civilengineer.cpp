#include "civilengineer.h"
#include <iostream>

using namespace std;

CivilEngineer::CivilEngineer()
{
    cout << "CivilEngineer constructor is called..." << endl;
}

std::ostream &operator<<(std::ostream &out, const CivilEngineer &engineer)
{
    out << "Civil engineer [Full name: " << engineer.get_full_name() << ", Age: " << engineer.get_age() << ", Address: " << engineer.get_address() << ", Speciality" << engineer.m_speciality << "]";
    return out;
}

CivilEngineer::~CivilEngineer()
{
}