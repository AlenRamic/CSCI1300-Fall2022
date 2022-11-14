#include <iostream>
#include "Animal.h"

using namespace std;

Animal::Animal()
{
    name = "Default Animal";
    species = "Default species";
    age = 0;
}

Animal::Animal(string new_name, string new_species, int new_age)
{
    name = new_name;
    species = new_species;
    if(new_age >= 0)
    {
        age = new_age;
    }
    else
    {
        age = 0;
    }
}

string Animal::getName()
{
    return name;
}
void Animal::setName(string new_name)
{
    name = new_name;
}

string Animal::getSpecies()
{
    return species;
}
void Animal::setSpecies(string new_species)
{
    species = new_species;
}

int Animal::getAge()
{
    return age;
}
void Animal::setAge(int new_age)
{
    if(new_age >= 0)
    {
        age = new_age;
    }
    else
    {
        cout << "Could not update age." << endl;
    }
}
