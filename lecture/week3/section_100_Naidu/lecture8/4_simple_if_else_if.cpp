#include <iostream>
using namespace std;

// program to check if a number is less than 100, 200, 300

int main()
{
    int num = 0; // good practice
    cout << "Enter two numbers: " << endl;
    cin >> num; // 0
    // one condition to be true
    if(num < 100) // numbers less than 100
    {
        // do something 
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

    // cout << "end of if ladder" << endl;
    return 0;
}