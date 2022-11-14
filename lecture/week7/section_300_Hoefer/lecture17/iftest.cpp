#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // make a variable of type ifstream
    ifstream my_file;

    // open the file
    my_file.open("hobbit-train.txt");

    // declare a string that will hold THE ENTIRE HOBBIT
    string big_string;

    // check to see if file is open
    if (my_file.is_open())
    {
        // get a little too excited
        cout << "WE'RE IN" << endl;

        // temporary string to hold the contents of the file
        // one line at a time
        string temp;

        // read each line of the file, one at a time
        while (getline(my_file, temp))
        {
            // add the line to the big_string
            big_string += temp + '\n';

            // print out the line to the screen
            cout << temp << endl;
        }

        // replace cin with the ifstream, my_file
        // cin >> temp;
        // my_file >> temp; // this only gets us one word
        // getline(my_file, temp);

        // cout << temp; // << endl;
    } else
    {
        cout << "Could not open file" << endl;
    }

    // uncomment to print out entire big string (print out hobbit again)
    //cout << big_string << endl;

    // create a variable of type ofstream
    ofstream outfile;

    // open a file 
    // (note, if the file does not exist, it will be created)
    outfile.open("a name of a new file.txt");

    // write to the file
    outfile << big_string << endl;



    return 0;
}