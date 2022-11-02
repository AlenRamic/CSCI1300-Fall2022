#include <iostream>
using namespace std;

int main()
{
    // Error #1: infinite loop
    int i = 5;
    while(i > 0) // true
    {
        cout << i << endl;
        i++; // update operation - loop condition has to become false eventually
    }

    // Error #2: loop condition is false; loop never executes
    i = 5;
    while(i < 0)
    {
        cout << i << endl;
        i--;
    }
    return 0;
}