#include <iostream>
#include <fstream> // 

using namespace std;

int main()
{
    // 1. create file stream objects/variables
    // ifstream means input file stream - used for reading from files
    ifstream fin;
    double var;

    // 2. Associate the file stream object with the file
    //    by using .open(), with the file name (as a string) in parentheses
    fin.open("sales1.txt");
    // fin.open(filename);
    // Open input file
    
    // 3. Check if file opened successfully; .fail()
    if(fin.fail()) // true if file cannot be opened
    {
        cout << "File cannot be opened! Check your program again!!!" << endl;
        return -1;
    }
    
    // 4. Read first line from file 
    // eof - end of file
    // while(!fin.eof()) // while(fin >> var)
    while(fin >> var)
    {
        cout << var << endl;
    }

    
    
    // 5. close files
    fin.close();
     
    return 0;
}
