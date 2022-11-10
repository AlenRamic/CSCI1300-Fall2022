#include <iostream>
#include <stdlib.h> // rand, srand
#include <time.h> // time

using namespace std;

int main()
{
    srand(time(NULL));//time(0)
    cout << RAND_MAX << endl;
    //0 - rand_max
    for(int i = 0; i < 7; i++)
    {
        cout << (rand() % (15 - 5 + 1)) + 5 << endl; // remainder
    } 
    // random number between 0 and n - 1 ----> rand() % n
    // If I want ———> between 1 and 10, I need to add 1 to numbers between 0 and 9
    // If I want ———> between min and max, I need to add min to numbers between 0 and (max - min)
    //                                                                  rand() % (max - min + 1)

    return 0;
}
