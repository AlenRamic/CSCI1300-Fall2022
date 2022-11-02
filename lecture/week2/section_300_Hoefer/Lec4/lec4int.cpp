#include <iostream>

using namespace std;

int main(){
    int myInt = 10;

    const int myConstInt = 100;

    // myConstInt = 25;  // this is an error

    int mySubtraction = myInt - 100;

    double myDivision = myInt / 3.0;  // floating point numbers: double and float

    cout << "The myInt value is:" << myInt << endl;
    cout << "The mySubtraction value is:" << mySubtraction << endl;
    cout << "The myDivision value is:" << myDivision << endl;
    cout << "The myConstInt value is:" << myConstInt << endl;

}