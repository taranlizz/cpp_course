#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#include "person.h"

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