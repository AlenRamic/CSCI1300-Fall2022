#include <iostream>
using namespace std;

// program to check if a number(+ve) is less than 100, 200, 300

int main()
{
    int num = 0; // good practice
    cout << "Enter two numbers: " << endl;
    cin >> num; // 0
    // invalid inputs
    if(num < 0)
    {
        cout << "number is less than 0" << endl;
        return 0; // end of program execution
    }
    // valid inputs
    if(num < 100) // numbers between 0 and 100 because the if condition above catches all values less than or equal to 0
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
    return 0;
}