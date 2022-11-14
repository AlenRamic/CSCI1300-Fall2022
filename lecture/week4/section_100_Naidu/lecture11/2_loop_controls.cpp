#include <iostream>

using namespace std;


int main()
{
    // continue - skips the current iteration of the loop
    cout << "continue statement demo" << endl;
    for (int i = 1; i < 11; i++) // off by 1; ,< num + 1 // 1
    {
        if (i == 5)
        {
            continue;
        }
        cout << i << endl;
        // update
    }

 
    // break - terminates the loop
    cout << "break statement demo" << endl;
    for (int i = 1; i < 11; i++) // off by 1; ,< num + 1 // 1
    {
        if (i == 5)
        {
            break;
        }
        cout << i << endl;
        // update
    }
    

    return 0;
}