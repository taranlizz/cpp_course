#include <iostream>
#include "player.h"

int main()
{
    Player player1("Lionel", "Messi", "Football");
    // player1.first_name = "Neymar" - Compiler Error: protected fields are inaccessible from outside
    std::cout << player1 << std::endl;
}