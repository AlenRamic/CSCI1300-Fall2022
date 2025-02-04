// pre-processor directives
// include/header guards

#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>

using namespace std;

class Pokemon
{
    public:
        // Constructors
        Pokemon(); // default
        Pokemon(int num, string name, int hp, int attack, int defense, int speed, int max, string type1, string type2);
        // all getters return a value
        int getNum();
        string getName();
        int getHP();
        int getAttack();
        int getDefense();
        int getSpeed();
        int getMax();
        string getType1();
        string getType2();

        // setter update and don't return anything
        void setNum(int num);
        void setName(string name);
        void setHP(int hp);
        void setAttack(int attack);
        void setDefense(int defense);
        void setSpeed(int speed);
        void setMax(int max);
        void setType1(string type1);
        void setType2(string type2);

        // other member functions
        void updateHP(int hp);
        void display();

    private:
        int num_;
        string name_;
        int HP_;
        int attack_;
        int defense_;
        int speed_;
        int max_;
        string type1_;
        string type2_;
};

#endif
