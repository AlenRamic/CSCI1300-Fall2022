#include <iostream>

using namespace std;

/**
 * Example program to demonstrate:
 * 1. what are constant variables?
 * 2. rules to remember when you create constants
 */

int main()
{
    int var1 = 100;
    var1 = 200;
    var1 = 78;
    double stamp_cost = 0.55;
    stamp_cost = 0.56;
    
    const double STAMP_COST = 0.55; // has to have a value at the time of definition

    STAMP_COST = 1.5; // a constant variable cannot be modified after initialization; syntax error

    return 0;
}