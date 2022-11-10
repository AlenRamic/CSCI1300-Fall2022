#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0));
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    int i = rand();
    cout << static_cast<double>(i) / RAND_MAX << endl;
    return 0;
}