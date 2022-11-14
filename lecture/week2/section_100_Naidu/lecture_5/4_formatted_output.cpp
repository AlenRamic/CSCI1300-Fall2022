#include<iostream> //fixed
#include<iomanip>  // setprecision()

using namespace std;

int main()
{
    int a = 23;
    int b = 3;

    double c = (double)(a/b);
    cout << setw(50);
    cout << fixed << setprecision(10);
    cout << "23.0/3 = " << (double)a/b << endl;
    cout << setw(3);
    cout << fixed << setprecision(2);
    cout << "c = " << c << endl;   
}