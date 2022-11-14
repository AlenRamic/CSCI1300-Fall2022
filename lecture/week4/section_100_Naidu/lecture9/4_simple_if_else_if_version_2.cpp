#include <iostream>
using namespace std;

// program to check if a number(+ve) is less than 100, 200, 300

int main()
{
    int num = 0; // good practice
    cout << "Enter two numbers: " << endl;
    cin >> num; // 0

    // valid inputs
    if(num >= 0 && num < 100) // numbers between 0 and 100 because of && operator
    {
        cout << num << " is less than 100" << endl;
    }
    else if(num < 200) // numbers between 100 and 200
    {
        cout << num << " is between 100 and 200" << endl;
    }
    else if(num < 300)  // numbers between 200 and 300
    {
        cout << num << " is between 200 and 300" << endl;
    }
    else // good idea to add a last else condition to catch all other values
    {
        cout << "number doesn't fall within 100 to 300" << endl;
    }
    return 0;
}