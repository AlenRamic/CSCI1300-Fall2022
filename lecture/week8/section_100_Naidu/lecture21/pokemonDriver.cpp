#include <iostream>
#include "Pokemon.h"
// never use include to add .cpp files

using namespace std;


int main()
{
    // test default constructor
    Pokemon pikachu; // constructor is called
    // creates pikachu object and sets aside memory for pikachu's data members/attributes 

    // test display
    pikachu.display(); // easier to print everything if we have a function for it or you can individually call teh getters to access the values for that object; see lines 18 and 19

    // cout << pikachu.getLevel() << endl;
    // cout << pikachu.getName() << endl;
    // test setters
    pikachu.setName("pikachu");
    pikachu.setLevel(1);

    pikachu.display();

    // test parameterized constructor
    Pokemon charmander("charmander", 1); // order of values

    charmander.display();

    return 0;
}