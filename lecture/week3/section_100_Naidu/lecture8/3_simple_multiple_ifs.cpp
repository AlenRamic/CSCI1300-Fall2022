#include <iostream>
using namespace std;

// program to check if a number is less than 100, 200, 300

int main()
{
    int num = 0; // good practice
    cout << "Enter two numbers: " << endl;
    cin >> num; // 0
    // one condition to be true
    if(num < 100)
    {
        // do something
        cout << num << " is less than 100" << endl;
    }
    if(num >= 100 && num < 200) // 0
    {
        cout << num << " is less than 200" << endl;
    }
    if(num < 300)  //0
    {
        cout << num << " is less than 300" << endl;
    }

    // cout << "end of if ladder" << endl;
    return 0;
}