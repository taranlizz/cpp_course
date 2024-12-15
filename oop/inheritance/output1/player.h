#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#include "person.h"

// Access specifiers are keywords used to define the visibility and accessibility of class members (attributes and methods).
// They determine whether a member is accessible from outside the class, within derived classes, or only inside the class.

// PUBLIC base class specifier:
// members declared under the public access specifier are accessible from anywhere in the program.
// Accessible:
// -- inside the class
// -- derived classes
// -- outside the class

// BASE              DERIVED
// public  --------> public
// protected ------> protected
// private --------> private

// Protected specifier:
//  -- within the class
//  -- within derived classes
//  -- not accessible from outside the class

// PROTECTED base class specifier
// BASE              DERIVED
// public ---------> protected
// protected ------> protected
// private --------> private

// PRIVATE specifier
// members declared under the private access specifier are only accessible with the class
// not accessible from outside the class or in derived classes

// PRIVATE base class specifier
//  BASE              DERIVED
//  public ---------> private
//  protected ------> private
//  private --------> private

// Through the base class access specifier, we can control how relaxed or constrained
// is the access of base class members from the derived class

// Regardless of the access specifier, private members of base class are never accessible from derived classes

class Player : public Person
{
    friend std::ostream &operator<<(std::ostream &out, const Player &player);

private:
    std::string game = "None";

public:
    Player() = default;
    Player(std::string_view first_name, std::string_view last_name, std::string_view game_name);
};

#endif