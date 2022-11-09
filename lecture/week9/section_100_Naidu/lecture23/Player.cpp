#include <iostream>
#include "Pokemon.h"
#include "Player.h"

using namespace std;

Player::Player()
{
    name_ = "newbie";
    gender_ = "";
    points_ = 0;
    // initialize numeric arrays -> initial value
    // for loop

}

Player::Player(string name, string gender, double points, Pokemon p[], int numPokemons)
{
    name_ = name;
    gender_ = gender;
    points_ = points;
}

void Player::setName(string name)
{
    name_ = name;
}

void Player::setGender(string)
{

}
void Player::setPoints(double)
{

}
void Player::setPokemon(int location, Pokemon p)
{

}

string Player::getName() const
{
    return name_;
}


string Player::getGender() const
{

}
double Player::getPoints() const
{

}
Pokemon Player::getPokemonAt(int) const
{

}


// Player p;
// Player p("demo", "", 100, d, )2
// p.getDemoAt(0)
