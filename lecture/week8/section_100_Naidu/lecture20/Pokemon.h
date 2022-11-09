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
        // setters don't return a value but accept input
        void setName(string name);

        // getters return a value but don't accept input
        string getName();

    // all data members/class attributes should be defined under the private access specifier
    // good idea to end attribute names with _
    private:
        string name_;
        int level_;
}; // Don't forget to close the definition with a ;

#endif