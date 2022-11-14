#include<iostream>
#include "Pokemon.h"
// never use include to add .cpp files

using namespace std;

// implement the methods that were define in the .h file
// attach all methods to the class
// default constructor
Pokemon::Pokemon()
{
    level_ = 0;
    name_ = "none";
}

// parameterized constructor
Pokemon::Pokemon(string name, int level)
{
    name_ = name;
    level_ = level;
}

// setters don't return a value but accept input
void Pokemon::setName(string name)
{
    // lhs - class attribute
    // rhs - parameter
    name_ = name;
}

void Pokemon::setLevel(int level)
{
    level_ = level;
}

// getters return a value but don't accept input
string Pokemon::getName() const
{
    return name_;
}

int Pokemon::getLevel() const
{
    return level_;
}

// printng values
void Pokemon::display() const
{
    cout << "-----------------------------------" << endl;
    cout << "Name: " << name_ << endl;
    cout << "Level: " << level_ << endl;
    cout << "-----------------------------------" << endl;
}