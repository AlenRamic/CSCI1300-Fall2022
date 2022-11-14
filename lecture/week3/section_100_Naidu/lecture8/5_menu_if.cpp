#include <iostream>

using namespace std;

// program to demo writing menus using if else if construct

/**
 Choose a category:
 a: Furniture
 b: School Supplies
 c: Grocery
*/

// if()
// {
//     cout 
//     if()
//     {
//         cout
//         if()

//     }
// }

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

    if(option == 'a' || option == 'A') // can add multiple user input choices with logical operators
    {
        cout << "You chose Furniture" << endl;
    }
    else if(option == 'b')
    {
        cout << "You chose Supplies" << endl;
    }
    else if(option == 'c')
    {
        cout << "You chose Grocery" << endl;
    }
    else 
    {
        cout << "Sorry, we don't have that option. Goodbye!" << endl;
    }

    return 0;
}