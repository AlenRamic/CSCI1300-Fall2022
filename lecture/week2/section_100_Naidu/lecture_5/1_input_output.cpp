#include <iostream>

using namespace std;

// program to demonstrate getting input through cin

int main()
{
    int x,y;
    x = 0;
    y = 0;
    cout << "x = " << x << "y = " << y << endl;
    // Let's get some data from our users
    // useful to have a descriptive statement prompting user for input
    cout << "Enter data for x and y: " << endl;
    cin >> x;
    cin >> y;
    return 0;
}
