#include<iostream>
using namespace std;

int randomNumbers(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}

int main()
{
    int num = 0;
    srand(time(0)); // seed the random number generator
    
    for(int i = 0; i < 10; i++)
    {
        // random numbers between 3 and 10
        num = randomNumbers(3, 10);
        cout << num << endl;
    }
}