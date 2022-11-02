#include <iostream>
#include <cmath>
using namespace std;

// function definition + implementation before main()
int checkValidInput(int input, string printStatement)
{
    while(input < 0) // loop will run only if condition is true
    {
        cout << "Invalid input." << endl;
        cout << printStatement << endl;
        cin >> input;
    }
    return input;
}

int main()
{
    int num = -1;
    // check for +ve input
    num = checkValidInput(num, "Please enter a positive number: "); // int, string
    cout << "Square root of " << num << " is " << sqrt(num) << endl;
    return 0;
}


// after main
// function implementation

