#include <iostream>
#include <string>
using namespace std;

int main()
{
    // string declaration and initialization
    string first_name, last_name, space; // 
    first_name = "Young Woo";
    last_name = "Woo";

    cout << last_name << " " << first_name << endl;

    // concatenation
    string full_name;
    space = " ";

    full_name = first_name + space + last_name;
    cout << full_name << endl;

    // error: cannot concatenate literals
    full_name = first_name + " "; //not allowed
    full_name = "Woo Young Woo";

    // length of a string
    // string_variable_name.length();
    int len = first_name.length();
    cout << first_name.length() << endl;


    // referencing individual characters in a string
    /*
        L  e  s  l  i  e     K  n  o  p  e
        0  1  2  3  4  5  6  7  8  9  10 11
    */

    full_name = "Leslie Knope";
    len = full_name.length();

    cout << "full_name[0] is " << full_name[0] << endl; //index 0 is 1st letter
    cout << "full_name[1] is " << full_name[1] << endl; //index 0 is 2nd letter
    cout << "full_name[2] is " << full_name[2] << endl; 
    cout << "full_name[3] is " << full_name[3] << endl; 
    cout << "full_name[4] is " << full_name[4] << endl; 
    cout << "full_name[5] is " << full_name[5] << endl; 

    cout << "full_name[15] is " << full_name[len-1] << endl; // len - 1 will return the last character in the string 
    cout << "full_name[16] is " << full_name[16] << endl; // empty

    return 0;
}