#include "Pokemon.h"
#include "auxiliary_functions.h"
#include <iostream>

using namespace std;

void printAllPokemons(Pokemon p[], int numPokemons)
{

    for(int i=0; i<numPokemons; i++)
    {
        p[i].display();
    }
}

void printPokemon(Pokemon p[], int numPokemons, int index)
{
    bool flag = true;
    for(int i=0; i<numPokemons; i++)
    {
        if(p[i].getNum() == index)
        {
            p[i].display();
            flag = false;
            break;
        }

    }
    if(flag)
    {
        cout << "Couldn't find that pokemon" << endl;
    }
}

void fight(Pokemon p1, Pokemon p2)
{
    if(p1.getAttack() > p2.getAttack())
    {
        if(p1.getDefense() > p2.getDefense())
        {
            p2.updateHP(-10);
            p1.updateHP(10);
            cout << BOLDGREEN << p1.getName() << " defeated " << p2.getName() << " in one shot!" <<  RESET << endl;
        }
        else
        {
            p2.updateHP(-5);
            p1.updateHP(5);
            cout << YELLOW << p1.getName() << " had a bad start but managed to eventually defeat " << p2.getName() << RESET << endl;
        }
    }
    else
    {
        if(p2.getDefense() > p1.getDefense())
        {
            p1.updateHP(-10);
            p2.updateHP(10);
            cout << BOLDBLUE << p2.getName() << " defeated " << p1.getName() << " in one shot!" << RESET << endl;
        }
        else
        {
            p1.updateHP(-5);
            p2.updateHP(5);
            cout << RED << p2.getName() << " had a bad start but managed to eventually defeat " << p1.getName() << RESET << endl;
        }
    }

}

int main()
{
    int option;
    string temp;
    string filename;
    int ip_index;
    int numPokemons = 0;
    int totalPokemons = 150;
    Pokemon myPokemons[totalPokemons];
    do
    {
        cout << "1. Read pokemons from external file" << endl;
        cout << "2. Print all pokemons" << endl;
        cout << "3. Print this pokemon" << endl;
        cout << "4. Battle" << endl;
        cout << "5. Quit" << endl;
        getline(cin, temp);
        option = stoi(temp);
        switch(option)
        {
            case 1: { // WILL NOT WORK IF YOU DON'T IMPLEMENT readPokemons() in auxiliary_functions.cpp
                        cout << "Enter filename" << endl;
                        getline(cin, filename);
                        numPokemons = readPokemons(filename, myPokemons, numPokemons, totalPokemons);
                        cout << "Stored " << numPokemons << " in myPokemons array"<< endl;
                        break;
                    }
            case 2:{
                        cout << "Printing all pokemons!" << endl;
                        printAllPokemons(myPokemons, numPokemons);
                        break;
                    }
            case 3: {
                        cout << "Enter pokemon number: ";
                        getline(cin,temp);
                        ip_index = stoi(temp);
                        printPokemon(myPokemons, numPokemons, ip_index);
                        break;
                    }
            case 4:{
                        int poke1, poke2;
                        bool flag = true;
                        poke1 = randomNumbers(0,numPokemons);
                        poke2 = randomNumbers(0,numPokemons);
                        while(flag)
                        {
                            if(poke1 != poke2)
                            {
                                fight(myPokemons[poke1], myPokemons[poke2]);
                                flag = false;
                            }
                            else
                            {
                                poke2 = randomNumbers(0,numPokemons);
                            }
                        }
                        break;
                    }
            case 5: {
                        cout << "Hope you had fun! Goodbye!!!" << endl;
                        break;
                    }
            default: cout << "Invalid choice. Read the options carefully and choose again" << endl;
        }
    } while (option!=5);
    return 0;
}
