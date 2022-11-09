#include <iostream>
#include "Pokemon.h"
// never use include to add .cpp files

using namespace std;

// displayPokemon - helper function for a class
void displayPokemon(Pokemon p)
{
    cout << "***********************************" << endl;
    cout << "Name: " << p.getName() << endl;
    cout << "Level: " << p.getLevel()<< endl;
    cout << "*************************************" << endl;
}

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

    // charmander.display();
    displayPokemon(charmander);


    // charmander.level_ = 100;
    // cout << charmander.getLevel() << endl;

    int arr[10];
    int x = 10;
    arr[0] = x;
    // more lines of code
    arr[0] = 100;
    for(int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl; // print standard data types
    }


    Pokemon myPokemons[6];
    myPokemons[0] = pikachu;
    myPokemons[1] = Pokemon("Squirtle", 2);
    pikachu.display();
    myPokemons[0].setLevel(100); // updating level for the first pokemon in myPokemons
    myPokemons[0].display();
    // Pokemon p1;
    for(int i = 0; i < 6; ++i)
    {
        myPokemons[i].display(); // print infor for all pokemons
    }


    return 0;
}
