#ifndef PERSON_H
#define PERSON_H

#include <string>

using std::string, std::string_view;

class Person
{
    friend std::ostream &operator<<(std::ostream &out, const Person &person);

public:
    Person() = default;
    Person(string_view fullname, int age, string_view address);
    ~Person();

    // Getters
    string get_full_name() const;
    int get_age() const;
    string get_address() const;

public:
    string m_full_name{"None"};

protected:
    int m_age{0};

private:
    string m_address{"None"};
};

#endif