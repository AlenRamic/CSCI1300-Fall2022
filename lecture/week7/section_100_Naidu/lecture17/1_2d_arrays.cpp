#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    // constant variables (const keyword) cannot be modified after initialization
    // naming style - all caps
    const int ROW = 5;
    const int COL = 3;

    // declare array
    double arr1[ROW][COL]; // the size cannot be modified after an array is declared

    // initialize array - individual elements
    arr1[0][0] = 83.7;
    arr1[1][0] = 10.4;
    
    int ARR1[3];
    cout << ARR1; // will print the address where ARR1 is stored in memory
    // we need to print individual array elements

    // print array
    for(int i = 0; i < ROW; i++) // loop through every row
    {
        for(int j = 0; j < COL; j++) // loop through every column
        {
            cout <<  setw(20) << arr1[i][j];
        }
        cout << endl;
    }

    // initialize all elements in an array to 0 after declaration
    // initialize array through loop
    for(int i = 0; i < ROW; i++) // loop through every row
    {
        for(int j = 0; j < COL; j++) // loop through every column
        {
            arr1[i][j] = 0;
        }
    }
    // array declaration + initialization
    // all values are initialized at the time of declaration
    int arr2[ROW][COL] = {{1, 2, 3},
                        {4, 5, 6}, 
                        {7, 8, 9},
                        {10, 11, 12},
                        {13, 14, 15}}; 

    // print array
    for(int i = 0; i < ROW; i++) // loop through every row
    {
        for(int j = 0; j < COL; j++) // loop through every column
        {
            cout <<  setw(20) << arr2[i][j];
        }
        cout << endl;
    }

    // partial initialization
    // the first 2 rows have been initialized with the values in {} and the rest are initialized to 0
    int arr3[ROW][COL] = {{1, 2, 3},
                        {4, 5, 6}, 
                        {},
                        {},
                        {}}; 

    // print array
    for(int i = 0; i < ROW; i++) // loop through every row
    {
        for(int j = 0; j < COL; j++) // loop through every column
        {
            cout <<  setw(20) << arr3[i][j];
        }
        cout << endl;
    }
    
    // all 0's
    int arr4[ROW][COL] = { }; // all 0's

    // print array
    for(int i = 0; i < ROW; i++) // loop through every row
    {
        for(int j = 0; j < COL; j++) // loop through every column
        {
            cout <<  setw(20) << arr4[i][j];
        }
        cout << endl;
    }

    return 0;
}

