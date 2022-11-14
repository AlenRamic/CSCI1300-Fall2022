#include <iostream>

using namespace std;
// print the first 10 values starting from 1
// 0, -ve, +ve, boundary values
int main()
{
    // loop variable to print value
    int value = 1;
    int counter = 0;
    while(counter < 10) // new variable to count; count  < 10
    {
        cout << value << endl;
        value = value + 1;
        // update counter
        counter++; 
    }
    
}