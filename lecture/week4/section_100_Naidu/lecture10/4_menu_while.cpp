#include <iostream>

using namespace std;

// program to demo writing menus using if else if construct

/**
 Choose a category:
 a: Furniture
 b: School Supplies
 c: Grocery
*/


int main()
{
    char option;
    cout << "Welcome to Target" << endl;
    cout << "a: Furniture" << endl;
    cout << "b: Supplies" << endl;
    cout << "c: Grocery" << endl;
    cout << "q: Quit" << endl;
    cout << "Choose a category: ";
    cin >> option;
    // loop until user enters q
    while(option != 'q' && option !='Q')
    {
        if(option == 'a' || option == 'A') // can add multiple user input choices with logical operators
        {
            cout << "You chose Furniture" << endl;
        }
        else if(option == 'b' || option == 'B')
        {
            cout << "You chose Supplies" << endl;
        }
        else if(option == 'c' || option == 'C')
        {
            cout << "You chose Grocery" << endl;
        }
        else 
        {
            cout << "Sorry, we don't have that option. Goodbye!" << endl;
        }
        // update the loop variable so that it terminates at some point; Here we accept use input again
        cout << "Welcome to Target" << endl;
        cout << "a: Furniture" << endl;
        cout << "b: Supplies" << endl;
        cout << "c: Grocery" << endl;
        cout << "q: Quit" << endl;
        cout << "Choose a category: ";
        cin >> option;
    }
     // convert this program to use do while

    return 0;
}