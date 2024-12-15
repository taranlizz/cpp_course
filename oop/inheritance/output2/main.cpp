#include <iostream>
#include "person.h"
#include "player.h"
#include "nurse.h"
#include "engineer.h"

using namespace std;

int main()
{
    Player player;
    player.m_full_name = "Samuel Jackson"; // public field
    // player.m_age Compiler Error: protected field is accessible inside of the derived class, but not from the outside
    // player.m_address Compiler Error: private field is accessible solely inside of the base class

    cout << "player" << player << endl;

    Nurse nurse;
    // nurse.m_full_name = Compiler Error: protected field is accessible inside of the derived class, but not from the outside
    // nurse.m_age = Compiler Error: protected field is accessible inside of the derived class, but not from the outside
    // nurse.m_address = Compiler Error: private field is accessible solely inside of the base class

    Engineer engineer;
    // engineer.m_full_name = Compiler Error: private field is accessible solely inside of the base class
    // engineer.m_age = Compiler Error: private field is accessible solely inside of the base class
    // engineer.m_address = Compiler Error: private field is accessible solely inside of the base class
}