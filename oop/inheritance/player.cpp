#include "person.h"
#include "player.h"

Player::Player(std::string_view first_name, std::string_view last_name, std::string_view game_name)
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->game = game_name;
};

std::ostream &operator<<(std::ostream &out, const Player &player)
{
    out << "Player : [ game : " << player.game << " names : " << player.get_first_name() << " " << player.get_last_name() << "]";
    return out;
}
