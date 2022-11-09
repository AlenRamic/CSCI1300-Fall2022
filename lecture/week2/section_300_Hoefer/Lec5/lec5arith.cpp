#include <iostream>

using namespace std;

int main(){
    // declare an int
    int firstInt = 11;

    // declare another int
    int secondInt = 3;

    // divide one int by the other USING INTEGER DIVISION, print result
    cout << firstInt / secondInt << endl;

    // divie one int by the other USING FLOATING POINT DIVISION, print result
    cout << static_cast<float>(firstInt) / secondInt << endl;

    // print out remainder of dividing one int by the other (hint: modulo operator)
    cout << firstInt % secondInt << endl;


    return 0;
}