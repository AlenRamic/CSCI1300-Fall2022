#include "Pokemon.h"
#include <iostream>
#include <iomanip>

using namespace std;

Pokemon::Pokemon()
{
    name_ = "new pokemon";
    HP_ = 100;
    attack_ = 5;
    defense_ = 5;
    speed_ = 5;
    max_ = 5;
    type1_ = "none"; //na
    type2_ = "none";
}

Pokemon::Pokemon(int num, string name, int hp, int attack, int defense, int speed, int max, string type1, string type2)
{
    num_ = num;
    name_ = name;
    HP_ = hp;
    attack_ = attack;
    defense_ = defense;
    speed_ = speed;
    max_ = max;
    type1_ = type1;
    type2_ = type2;
}

// getters
int Pokemon::getNum()
{
    return num_;
}
string Pokemon::getName() // function is associated with class Pokemon
{
    return name_;
}

int Pokemon::getHP()
{
    return HP_;
}

int Pokemon::getAttack()
{
    return attack_;
}

int Pokemon::getDefense()
{
    return defense_;
}
int Pokemon::getSpeed()
{
    return speed_;
}
int Pokemon::getMax()
{
    return max_;
}
string Pokemon::getType1()
{
    return type1_;
}
string Pokemon::getType2()
{
    return type2_;
}
// setters
void Pokemon::setNum(int num)
{
    num_ = num;
}
void Pokemon::setName(string n)
{
    name_ = n;
}

void Pokemon::setHP(int hp)
{
    HP_ = hp;
}

void Pokemon::setAttack(int attack)
{
    attack_ = attack;
}
void Pokemon::setDefense(int defense)
{
    defense_ = defense;
}
void Pokemon::setSpeed(int speed)
{
    speed_ = speed;

}
void Pokemon::setMax(int max)
{
    max_ = max;
}
void Pokemon::setType1(string type1)
{
    type1_ = type1;
}
void Pokemon::setType2(string type2)
{
    type2_ = type2;
}
// other functions
void Pokemon::updateHP(int hp)
{
    HP_ = HP_ + hp;
}

void Pokemon::display()
{
    cout << "==========================================================================" << endl;
    cout << "Info for " << name_ << endl; // descriptive header so we know which pokemon's attributes are being displayed
    cout << setw(12) << "HP: " << HP_ << endl; // don't forget iomanip
    cout << setw(12) << "Attack: " << attack_ << endl;
    cout << setw(12) << "Defense: " << defense_ << endl;
    cout << setw(12) << "Speed: " << speed_ << endl;
    cout << setw(12) << "Max: " << max_ << endl;
    cout << setw(12) << "Type 1: " << type1_ << endl;
    cout << setw(12) << "Type 2: " << type2_ << endl;
    cout << "==========================================================================" << endl;
}
