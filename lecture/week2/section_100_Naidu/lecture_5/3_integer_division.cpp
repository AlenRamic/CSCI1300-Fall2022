#include <iostream>
#include <iomanip> // input output manipulators

using namespace std;

// program to demonstrate integer division

int main()
{
    // Dividing two variables of type int: 
    int a = 200;
    int b = 17;

    cout << "Dividing two integer variables: " << a / b << endl;

    // Dividing two variables of type double: 
    double x = 200;
    double y = 17;

    cout << "Dividing two double variables: " << x / y << endl;

    // Dividing two variables of different types: 

    cout << "Dividing two variables of different types:" <<  a / y <<  endl; // 200 / 17



    cout << "Dividing two variables of different types:" <<  x / b << endl;
    
    // cout << 12 / 5.0 << endl;
    // double c;
    // cout << a * b /c * 1.0

    int a,b;
    double c;

    a = 23;
    b = 3;
    c = (double)(a/b);                                      // 7 or 7.66666
    cout << fixed << setprecision(20);
    cout << "23/3 = " << a/b << endl;                       // 7
    cout << "23.0/3 = " << (double)a/b << endl;             // 7.666
    cout << "23/3.0 = " << a / (double)b << endl;           // 7.666
    cout << "23/3 = " << (double) (a/b) << endl;            // 7 or 7.666
    cout << "c = " << c << endl;                            // 7 or 7.666
    cout << "c/2 = " << c/2 << endl;                        // 3 or 3.5 or 3.000
    cout << "(a/b) / 2 = " << (double)(a/b) /2 << endl;     // 3 or 3.5 or 3.000
    cout << "(a/b) / 2 = " << (double)((a/b) /2) << endl;   // 3 or 3.5 or 3.000
    cout << "a/b/2 = " << a/b/2 << endl;                    // 3
    cout << "(5/6/2.0/4) = " << 5/6/2.0/4 << endl;          // 0
    return 0;
}
