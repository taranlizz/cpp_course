#include <iostream>
#include "person.h"
#include "player.h"

using namespace std;

int main()
{
    Player player;
    player.m_full_name = "Samuel Jackson"; // public field
    // player.m_age = 55 Compiler Error: protected field is accessible inside of tje derived class, but not from the outside
    // player.m_address = "alasls;la" Compiler Error: private field is accessible solely inside of the base class

    cout << "player" << player << endl;
}