#include <iostream>

using namespace std;

// print off every item in the array, one at a time
void print2dArray(int my_arr[][3], int size)
{
    // if you get stuck making loops, code out what you want to
    // happen each time the loop runs, then
    // replace the numbers that change with variables
    /*cout << my_arr[0][0] << endl;
    cout << my_arr[0][1] << endl;
    cout << my_arr[0][2] << endl;
    cout << my_arr[1][0] << endl;
    cout << my_arr[1][1] << endl; */


    for (int i = 0; i < size; i++)
    {        
        for (int j = 0; j < 3; j++)
        {
            // prints EVERY element of each sub-array
            cout << my_arr[i][j] << endl;
        }
    }


    return;
}

int main()
{
    // create a 1d array
    int arr_1d[] = {-1, -2, -3};

    // alternatively
    int arr_1d2[3] = {-1, -2, -3};

    // make a 2d array
    int arr[][3] = {
        {1, 2, 3},
        {10, 20, 30},
        {100, 200, 300},
        {1000, 2000, 3000}
    }; 

    // alternatively (without initiatlizing)
    int arr_2d_v2[4][3]; // four arrays of 3 elements each

    // this only prints a memory address!
    cout << arr << endl;

    // to print out every element, 
    // we'll call a void function to do so
    print2dArray(arr, 4);

    return 0;
}