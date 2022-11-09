#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<vector<int> > vec1 = { // initialization list similar to arrays
        {1,2,3},
        {1,2},
        {2,3,5,6}
    };

    // note: initalization lists won't work with the debugger

    // Another form of initializing vector of vectors
    // vector<int> temp;
    // temp.push_back(5);
    // temp.push_back(8);
    // temp.push_back(21);
    // temp.push_back(13);
    // vec1.push_back(temp);
    // vec1.push_back(2); // not allowed


    for (int i = 0; i < vec1.size(); i++) // rows
    {
        for (int j = 0; j < vec1[i].size(); j++) // columns
        {
            cout << vec1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    vec1[1].pop_back(); // 2

    for (int i = 0; i < vec1.size(); i++) // rows
    {
        for (int j = 0; j < vec1[i].size(); j++) // columns // 3, 2, 4
        {
            cout << vec1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    vec1.pop_back(); // 2, 3, 5, 6

    for (int i = 0; i < vec1.size(); i++) // rows
    {
        for (int j = 0; j < vec1[i].size(); j++) // columns // 3, 2, 4
        {
            cout << vec1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // use range-based for loop to print a 2d vector. Each element is now a vector accessed through temp
    for (vector<int> temp: vec1)
    {
        for(int i =0; i< temp.size(); i++)
        {
            cout << temp.at(i) << " " ; // temp[i]
        }
        cout << endl;
    }

    return 0;
}
