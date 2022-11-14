#include <iostream>
#include <iomanip>
#include <fstream> 

using namespace std;

int main()
{
    // 1. create file stream objects/variables
    // ifstream means input file stream - used for reading from files
    ifstream fin;
    string filename = "sales2.txt";
    string month;
    double var;
    string temp;

    // 2. Associate the file stream object with the file
    //    by using .open(), with the file name (as a string) in parentheses
    fin.open("sales2.txt");
    // fin.open(filename);
    // Open input file
    
    // 3. Check if file opened successfully; .fail()
    if(fin.fail()) // true if file cannot be opened
    {
        cout << "File cannot be opened! Check your program again!!!" << endl;
        return -1;
    }
    
    // extract the first line and do nothing with it
    getline(fin, temp);

    // eof - end of file
    // while(!fin.eof())
    // if we don't extract the first line, the while loop will fail
    while(fin >> month >> var)
    {
        cout << month << setw(15) << var << endl;
    }

    // 5. close files
    fin.close();
     
    return 0;
}
