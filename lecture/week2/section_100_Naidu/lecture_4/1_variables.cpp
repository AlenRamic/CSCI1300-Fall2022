#include <iostream>

using namespace std;

// how do comments work?

int main()
{

    // A variable must have a type and a name. 
    // You can assign it an initial value but it's not mandatory

    // data_type name;
    bool test;
    // data types: boolean, char, int, float, double, string
    // 1 byte = 8 bits

    // boolean -> 1 bit -> 0/1

    // variable definition/declaration
    bool var3;

    // true = 1; false = 0;

    // variable initialization
    bool var4 = 0;
    bool var5 = true;

    cout << "Value stored in var 4: " << var4 << endl;
    cout << "Value stored in var 5: " << var5 << endl;

    // char    -> 1 byte
    char letter1 = 'a'; // single quotes
    char letter2 = '#';

    cout << letter1 << "   " << letter2 << endl;

    // integer: positive or negative whole numbers
    // short int -> 2 bytes
    // int       -> 4 bytes ( -2,147,483,648 to +2,147,483,647)
    // long int  -> 8 bytes

    long int var10 = 1000000098865447889;

    // variable definition
    int var1;

    // variable assignment/initialization
    var1 = 10;
    int var2 = 120;


    // positive whole numbers
    // unsigned int      -> 4 bytes
    // unsigned long int -> 8 bytes

    unsigned int num_of_stamps = 10; // only store +ve values
    int var11 = -11.96;
    cout << var11 << endl;

    // decimal/floating point data
    // float       -> 4 bytes  (7 decimal digits of precision)
    // double      -> 8 bytes  (15 decimal digits of precision)
    // long double -> 16 bytes (~30 decimal digits of precision)

    float var20 = 1000.457;
    double var21 = -985.3573;

    // one definition per variable
    // int var21 = 21; // this will give a re-definition error as var21 is already defined in line 67

    // Modifying the value of variable via assignment statement. cout to see the updated value
    var21 = 90;
    var21 = '3'; // cannot store character data in a double variable
 
    // Error: Using undefined variables
    // var100 = 100;


    // Ranges for Data Types: https://docs.microsoft.com/en-us/cpp/cpp/data-type-ranges?view=msvc-170 
    return 0;
}