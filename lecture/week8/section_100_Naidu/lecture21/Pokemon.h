// pre-processor directives
// include/header guards
// should have the same name as class but in UPPERCASE
#ifndef POKEMON_H
#define POKEMON_H

#include<iostream>

using namespace std;

class Pokemon
{
    // all member functions/class methods should be defined under the public access specifier
    public:
        // constructor(s) 
        // constructors have the same name as the class and have no return type
        Pokemon(); // default constructor - all data members initialized to zero or empty or some initial value
        // These initial values could also be some default values all objects should start off with. For eg. all pokemons start with 100 hp, name as none and level 0

        // parameterized constructor
        Pokemon(string name, int level); 
        // we initialize the data members to the values passed as parameters

        // setters don't return a value but accept input
        void setName(string name);
        void setLevel(int level);

        // getters return a value but don't accept input
        string getName() const;
        int getLevel() const;

        // other function
        // displays all the data in class
        void display() const;


    // all data members/class attributes should be defined under the private access specifier
    // good idea to end attribute names with _
    private:
        string name_;
        int level_;
}; // Don't forget to close the definition with a ;

#endif