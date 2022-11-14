//compile this using g++ -std=c++17 Animal.cpp Enclosure.cpp ZooDriver.cpp
#include <iostream>
#include "Animal.h"
#include "Enclosure.h"

using namespace std;

int main()
{
    //create our array of Enclosures
    const int NUM_ANIMALS = 3;
    Enclosure zoo[NUM_ANIMALS];

    //showing that zoo has been filled with default animals
    cout << zoo[0].getOccupant().getName() << endl;

    //let's make an animal to put in our default enclosure
    Animal my_zebra = Animal("Bob", "Zebra", 5);
    zoo[0].setOccupant(my_zebra);
    //describe the first enclosure at our zoo
    zoo[0].describeEnclosure();

    //make a second animal
    Animal my_lion = Animal("Maria", "Lion", 3);
    //let's make a custom enclosure for our next Animal
    Enclosure my_enclosure(12, 8.5, my_lion);
    //put our new enclosure in the zoo
    zoo[1] = my_enclosure;
    zoo[1].describeEnclosure();

    //renovate the third enclosure in our zoo
    zoo[2].setLength(15.67);
    zoo[2].setWidth(22.8);
    zoo[2].describeEnclosure();

    return 0;
    return 0;
}