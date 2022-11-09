#include <iostream>

using namespace std;

// functions utilized in programs so far ()
// sqrt, getline, setprecision, length, floor, main and many more

// user defined function - you define this in your program
// built-in function - accesed through librarues added through #include directive

// Function advantages
// 1. increases readability, re-usability
// 2. easier to test/modify a block of code vs. a full program
// 3. break up a complex program into smaller chunks
// 4. avoid repeating the same code multiple times in your program
// 5. create .h files with user-defined functions for later use in your project - 2 weeks

// function definition - put this before main (1 step process)

// return(data type) functionName(formal parameters(input)) 
// {
        // function code
// }

// return and name - required
// parameters - optional

// return type - int, char, bool, string, char, signed int etc
int multiplication(int num1, int num2, int num3) // formal parameters
{ // scope -- area within which you can access/modify that variable
    int product = 0;
    product = num1 * num2 * num3;
    return product;// control goes back to the calling function
    // return can only return one variable
}

// when to use void function - printing menus
// void - function doesn't return anything
void product(int num1, int num2, int num3) //scope inside function
{
    int product = 0;
    product = num1 * num2 * num3;
    cout << product << endl;  
}


// multiply 3 numbers
int main() // calling function
{   
    int x =0, y = 0, z = 0;
    cout << "Enter three numbers" << endl;
    cin >> x >> y >> z;
    int answer = multiplication(x, y, z); // function arguments at function call; variable name or value
    return 0; // this is the last statement in our main()
}