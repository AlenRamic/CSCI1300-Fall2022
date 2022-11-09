#include <iostream>
using namespace std;

// program to check if user input is 12 - 40; 40 - 80

// if 
// if else
// if else if else if......
int main()
{
    int num = 0; // good practice to initialize all numeric variables to 0
    cout << "Enter a number: " << endl;
    cin >> num; 
    if(num > 12)// do not put a ; after if
    {
        if(num < 40)
            cout << num << " is between 12 and 40" << endl;
    }
    else if (num >= 40 && num < 80)
    {
        cout << num << " is between 40 and 80" << endl;
    }
    else // catches all other values
    {
        cout << "not is range" << endl;
    }
    // doesn't need to end with else
    return 0;
}