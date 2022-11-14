#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num = -1;
    // check for +ve input
    do // loop will run at least one time regardless of condition being true
    {
        cout << "Please enter a positive number: " << endl;
        cin >> num;
    }while(num < 0);
    cout << "Square root of " << num << " is " << sqrt(num) << endl;
    return 0;
}
