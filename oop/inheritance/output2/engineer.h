#ifndef ENGINEER_H
#define ENGINEER_H

#include "person.h"

// Engineer is doing private inheritance
class Engineer : public Person
{
    friend std::ostream &operator<<(std::ostream &out, const Engineer &engineer);

public:
    Engineer();
    ~Engineer();

    void build_something() {};

    // Resurrecting members variables
protected:
    using Person::get_address;
    using Person::get_age;
    using Person::get_full_name;

public:
    // using Person::m_address Compiler Error
    using Person::m_full_name;

private:
    int contract_count{0};
};

#endif