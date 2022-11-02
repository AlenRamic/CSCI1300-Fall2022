#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "Pokemon.h"

using namespace std;


class Player
{
    public:
    Player();
    Player(string name, string gender, double points, Pokemon p[], int numPokemons);

    void setName(string);
    void setGender(string);
    void setPoints(double);
    void setPokemon(int location, Pokemon p);

    string getName() const;
    string getGender() const;
    double getPoints() const;
    Pokemon getPokemonAt(int) const;


    private:
    static const int size_ = 6;
    string name_;
    string gender_;
    double points_;
    Pokemon my_pokemon_[size_]; // initializing 6 pokemons to default values
};

#endif
