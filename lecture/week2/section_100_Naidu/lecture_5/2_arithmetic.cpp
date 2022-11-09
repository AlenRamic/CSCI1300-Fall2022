#include <iostream>

using namespace std;

// Program to demonstrate arithmetic operations
int main()
{
    // Arithmetic operations
    int a = 10;
    int b = 20;

    // addition +
    int sum = a + b;
    cout << "Addition: " << sum << endl;
    // cout << "Addition: " << a + b << endl;
    
    // subtraction -
    cout << a - b << endl; // -10
    
    // multiplication
    cout << a * b << endl; // 300

    // // Division: quotient
    cout << a / b << endl; // 0, 0

    // modulo
    cout << a % b << endl; // 10
    
    // Expressions
    cout << a * b / (a - b) + 10;

    return 0;
}