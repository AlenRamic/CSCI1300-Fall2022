#include <iostream>

using namespace std;

// The switch statement
// When to use it: when you have multiple alternatives 
// for the value of a variable. Most often: with int and char

// if (a == '1' || a == 'X")
// projects
// Very often used for menu options:
// Please choose your difficulty option:
// 1. Easy
// 2. Medium
// 3. Difficult

// When you cannot use it:
// 1. When your variable can take a value in a range
// 2. Cannot be used with double variables because == is not precise

// if (x >= 10 && x <50)
// if (x == 'c')
// if (x == 12)

// faster than if statemet if more than 5 options

// program to demo writing menus using switch construct

// loops
int main()
{
    char option;
    cout << "Welcome to Target" << endl;
    cout << "a: Furniture" << endl;
    cout << "b: Supplies" << endl;
    cout << "c: Grocery" << endl;
    cout << "Choose a category: ";
    cin >> option;

    switch(option) // always has to be a variable; not a condition
    {
        case 'A':
        case 'a': cout << "You chose Furniture" << endl;
                    break;
        // if( option == 'a' || option == 'A")
        case 'B':
        case 'b': cout << "You chose Supplies" << endl;
                    break;
        case 'C':
        case 'c': cout << "You chose Grocery" << endl;
                    break;
        default: cout << "Sorry, we don't have that option. Goodbye!" << endl;
                    break;
    }

  
    return 0;
}