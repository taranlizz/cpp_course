#ifndef NURSE_H
#define NURSE_H

#include "person.h"

// Nurse does protected inheritance
class Nurse : protected Person
{
    friend std::ostream &operator<<(std::ostream &out, const Nurse &nurse);

public:
    Nurse();
    ~Nurse();

    void treat_person()
    {
    }

private:
    int practice_certificate_id{0};
};

#endif