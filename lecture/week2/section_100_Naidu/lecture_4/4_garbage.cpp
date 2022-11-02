#include <iostream>

using namespace std;

/**
 * Example program to demonstrate:
 * 1. what are garbage values?
 */

int main()
{
    int var1;
    // variables of numeric data types should be initialized before use
    // if a variable is uninitialized then we may get 0 or garbage values
    cout << var1 << endl;

    return 0;
}