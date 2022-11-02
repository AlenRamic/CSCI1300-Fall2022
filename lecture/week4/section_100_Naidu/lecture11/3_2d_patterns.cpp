#include <iostream>
#include <string>
using namespace std;

// 2D patterns
// rows and columns
// -----
// -----
// -----
// -----
// -----

int main()
{
    // approach 1
    int count = 0;
    while(count < 5)
    {
        cout << "-----" << endl;
        count++;
    }

    // approach 2
    // nested loops - 1 loop to count our rows and other loop for columns
    // two different loop variables
    for(int i = 0; i < 5; i++) // outer loop -> rows
    {
        for(int j = 0; j < 5;  j++) // inner loop -> columns
        {
            cout << "-";
        }
        cout << endl;
    }


    //-
    //-

    // -------------------
    
 
    return 0;
}






