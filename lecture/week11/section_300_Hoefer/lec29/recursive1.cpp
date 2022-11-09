#include <iostream>

using namespace std;


int recursiveSum(int count)
{
    if (count < 1)
    {
        // base case
        return 0;
    }
    else{
        // recursive case with simplified problem (moving "count" towards the base case)
        return recursiveSum(count - 1) + count; 
    }
}


int loopSum(int count)
{
    int sum = 0;
    for (int i = 0; i <= count; i++)
    {
        sum += i;
    }
    return sum;
}


int main()
{
    const int LIMIT = 15;

    int lSum = loopSum(LIMIT);
    cout << "Loop result: " << lSum << endl; 

    int rSum = recursiveSum(LIMIT);
    cout << "Recursive result: " << rSum << endl;

    return 0;
}