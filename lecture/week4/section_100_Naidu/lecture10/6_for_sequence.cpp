#include <iostream>

using namespace std;
/*
    while(condition)
    {
        statements;
    }


*/

/*
    // loop variable - i,j
    for (initialization; condition; update) // i++ -> i = i + 1; i-- -> i = i - 1
    { 
        statements; // also called loop body
    }
    // count something, when you know how many times the loop will be executed
    

    OR

    initialization;
    while(condition)
    {
        statements;
        update;
    }

*/

int main()
{
    int num = 0;
    cout << "Enter a number: ";
    cin >> num; // 5
    
    // print numbers from 0 -> num == 1 2 3 .... num
    for (int i = 1; i <= num; i++) // off by 1; ,< num + 1 // 1
    {
        cout << i << endl;
        // update
    }
   
    
    
    // print every other number from 0 -> num -- 2 4 6 8 10 12 14 ..
    // approach 1
    for(int i = 2; i < num; i++)
    {
        if( i % 2 == 0)
        {
            cout << i << endl;
        }
    }

    // approach 2
    for(int i = 2; i < num; i+=2)// i = i + 2; i*=2
    {
        // more efficient; skips every other number
        cout << i << endl;
    }
    
    
    return 0;
}