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
        cout << "a: Couch" << endl;
        cout << "b: Tables" << endl;
        cout << "c: Chair" << endl;
        cout << "Choose a category: ";
        char furniture_option;
        cin >> furniture_option;
        if(furniture_option == 'a') // nesting aother menu inside
        {
            cout << "Couches" << endl;
        }
        else if(furniture_option == 'b')
        {
            cout << "Tables" << endl;
        }
        else if(furniture_option == 'c')
        {
            cout << "Chair" << endl;
        }
        else 
        {
            cout << "Sorry, we don't have that furniture option. Goodbye!" << endl;
        }

    }
    else if(option == 'b')
    {
        cout << "You chose Supplies" << endl;
        cout << "a: Books" << endl;
        cout << "b: Planners" << endl;
        cout << "c: Highlighters" << endl;
        cout << "Choose a category: ";
        char supplies_option;
        cin >> supplies_option;
        if(supplies_option == 'a')
        {
            cout << "Books" << endl;
        }
        else if(supplies_option == 'b')
        {
            cout << "PLanners" << endl;
        }
        else if(supplies_option == 'c')
        {
            cout << "Highlighters" << endl;
        }
        else 
        {
            cout << "Sorry, we don't have that supply option. Goodbye!" << endl;
        }
    }
    else if(option == 'c')
    {
        cout << "You chose Grocery" << endl;
        cout << "a: Produce" << endl;
        cout << "b: Beverages" << endl;
        cout << "c: Candy" << endl;
        cout << "Choose a category: ";
        char grocery_option;
        cin >> grocery_option;
        if(grocery_option == 'a')
        {
            cout << "Produce" << endl;
        }
        else if(grocery_option == 'b')
        {
            cout << "Beverages" << endl;
        }
        else if(grocery_option == 'c')
        {
            cout << "Candy" << endl;
        }
        else 
        {
            cout << "Sorry, we don't have that grocery option. Goodbye!" << endl;
        }
    }
    else 
    {
        cout << "Sorry, we don't have that option. Goodbye!" << endl;
    }

    return 0;
}