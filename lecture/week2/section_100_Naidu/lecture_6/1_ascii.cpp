#include <iostream>
#include <string>
using namespace std;

int main()
{
    char c;
    cout << "Enter a character: ";
    cin >> c; // will save as character; ascii values will not be converted
    cout << c << endl;
    
    c = 98; // will store b inside the char variable c
    cout << c << endl;
    c = c + 6; // c now has the value h
    cout << c << endl;

    // you can cast the char variable to int if you want to work with ascii values.
    cout << (int)c << endl;
    return 0;
}