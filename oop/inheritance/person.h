#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

// Private fields are inaccessible from derived classes
// Protected fields are accessible from derived classes, but inaccessible from outside

class Person
{
    friend std::ostream &operator<<(std::ostream &out, const Person &person);

protected:
    std::string first_name = "None";
    std::string last_name = "None";

public:
    Person();
    Person(std::string_view first, std::string_view last);

    // Getters
    std::string get_first_name() const
    {
        return first_name;
    }

    std::string get_last_name() const
    {
        return last_name;
    }

    // Setters
    void set_first_name(std::string_view name)
    {
        first_name = name;
    }

    void set_last_name(std::string_view name)
    {
        last_name = name;
    }
};

#endif