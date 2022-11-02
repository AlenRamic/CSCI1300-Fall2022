#include <iostream>

using namespace std;

// Rules to follow when you work with variables

int main()
{
    // Rules for variable names/identifiers and initial value:
    // Error #1: name must start with a character or _
    int var1 = 10;
    double _xyz;
    int cans_per_pack; // using in class
    int cansPerPack; // camelCasing

    // Error #2: you cannot use a reserved word as a variable name
    // float, int, new, class, if, main, cout are a few of the reserved words we cannot use for variable names
 
    int cout;
    int double;
    float main;
    // cannot use keywords as variable names

    // Error #3: some symbols are not allowed. cannot have spaces in the name
    // . / are few symbols that we can't use for variable names
    int cans/per/pack; // not allowed

    /* 
    c++ style guide:  https://google.github.io/styleguide/cppguide.html
    Naming convention: https://google.github.io/styleguide/cppguide.html#Naming
    */

    // MEANINGFUL NAMES!!!
    int we_can_do_this;  // I will use this naming convention for variables
    int weCanDoThis; //eg: camel case naming convention; for functions


    // Error #4: the initial value MUST MATCH the declared type. All the time?
    // Answer: 
    int num10 = 105.7;  
    
    // A warning displayed in the console and c++ implicity casts 105 to variable
    
    
    
    // Typecasting: int to double, double to int, int to char, char to int
    // implicit vs. explicit

    double var100 = 197.45637;
    // computation
    int sum = static_cast <int> (var100);

    // static_cast <data_type> (variable_name) or (data_type)variable_name
    
    int sum2 = (int) var100;
    double product = (double) sum2;


    // explicitly casting a decimal value to an integer
    

    
    

    return 0;
}