#ifndef PLAYER_H
#define PLAYER_H

#include "person.h"

// Player does public inheritance from Person
class Player : public Person
{
    friend std::ostream &operator<<(std::ostream &out, const Player &player);

public:
    Player();
    ~Player();

    void play()
    {
        m_full_name = "Neymar";
        m_age = 32;
        // m_address = Compiler Error: inaccessible
    }

private:
    int m_career_start_year{0};
    double m_salary{0.0};
    int health_factor{0};
};

#endif