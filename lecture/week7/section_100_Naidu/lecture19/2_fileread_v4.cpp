#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    double var;
    string month;
    string line;
    // 1. create file stream objects/variables
    // ifstream means input file stream - used for reading from files
    ifstream fin;

    // 2. Associate the file stream object with the file
    //    by using .open(), with the file name (as a string) in parentheses
    fin.open("sales3.txt"); // Open input file
    
    // 3. Check if file opened successfully
    if (fin.fail()) // or (!fin.open())
    {
        cout << "File couldn't be opened!" << endl;
        return -1; // return because I don't want my program to continue if file wasn't opened successfully
        // -1 to indicate the program didn't execute successfully
    }
    
    // extract the first line and do nothing with it
    getline(fin, line);

    // we process the header before the while loop because our loop only processes numeric data
    // when our loop code tries to process non-numeric data we would get the follwoing error
        // libc++abi: terminating with uncaught exception of type std::invalid_argument: stoi: no conversion
        // zsh: abort      ./a.out
        
    double total = 0;
    string month;
    // 4. Read lines from file 
    // eof() returns true if we have complete reading all the data in the file - end of file
    while(!fin.eof()) // as long as there is data to read from file, loop will execute
    {

        // check if there is any content in that line; we don't want to print empty lines
        // s != ""; s != " "; !s.empty()
        // isspace(line[0]) && line.length > 1 // ignores spaces and empty lines
        getline(fin, line); 
        // temp string; 
        string temp; 
        if (line.length() > 1 && !isspace(line[0]))
        {
            for(int i =0; i < line.length(); i++)  
            {
                if(line[i] == ',') // check if current character is the separator - ,
                {
                    // extract everything after the comma (separator)
                    temp = line.substr(i+1); 
                    // convert the numeric data stored in teh string temp
                    var = stoi(temp);
                    total += var;
                }
            }

        }

    }

    cout << "Total: " << total << endl;
    
    // 5. close files
    fin.close();
     
    return 0;
}
