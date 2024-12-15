#include "nurse.h"
#include <iostream>

Nurse::Nurse() {}

std::ostream &operator<<(std::ostream &out, const Nurse &nurse)
{
    out << "Nurse [Full name: " << nurse.get_full_name() << ", Age: " << nurse.get_age() << ", Address: " << nurse.get_address() << ", Practice certificate id " << nurse.practice_certificate_id << "]";
    return out;
}

Nurse::~Nurse()
{
}