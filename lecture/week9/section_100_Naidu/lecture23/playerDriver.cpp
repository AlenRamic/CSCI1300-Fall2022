#include <iostream>
#include "Pokemon.h"
#include "Player.h"

using namespace std;

int main()
{
    Pokemon charmander("charmander", 1);
    Pokemon pikachu("pikachu", 1);

    Pokemon temp[4];
    temp[0] = charmander;
    temp[1] = pikachu;
    temp[2] =  Pokemon("squirtle", 0);


    Player p;

    Player p1("demo", "", 30, temp, 2);

    Player my_players[10];

    my_players[2].setName("");

    my_players[4] = Player("demo", "", 30, temp, 2); // readPosts



    return 0;
}
