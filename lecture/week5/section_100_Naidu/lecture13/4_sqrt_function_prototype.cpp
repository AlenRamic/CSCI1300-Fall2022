#include <iostream>
#include <cmath>
using namespace std;

// function signature/prototype;
// signature before main() but implemented after main()
int checkValidInput(int input, int printStatement);

// the following is also valid
// int checkValidInput(int, int);
// function signature doesn't require names for parameters jut the data types

// function names can be re-used if the function accepts different data types or different number of parameters. This is called function overloading
// int checkValidInput(int input, string printStatement);
// int checkValidInput(int input);

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
