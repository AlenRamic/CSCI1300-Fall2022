#include <iostream>
#include <fstream> // 

using namespace std;

int main()
{
    // 1. create file stream objects/variables
    // ifstream means input file stream - used for reading from files
    ifstream fin;
    string filename = "sales3.txt";
    string month;
    double var;
    string line;
    double sum = 0;

    // 2. Associate the file stream object with the file
    //    by using .open(), with the file name (as a string) in parentheses
    fin.open(filename);
    // fin.open(filename);
    // Open input file
    
    // 3. Check if file opened successfully; .fail()
    if(fin.fail()) // true if file cannot be opened
    {
        cout << "File cannot be opened! Check your program again!!!" << endl;
        return -1;
    }
    // extract the first line and do nothing with it
    getline(fin, line);
    // 4. Read first line from file 
    // eof - end of file
    // while(!fin.eof()) // while(fin >> var)
    // temp string; 
    string temp;
    while(!fin.eof()) // 
    {
        getline(fin, line);
        // cout << month << setw(10) << var << endl;
        // cout << line << endl;
        // length of the string is > 1 && isspace(line[0])
        for(int i = 0; i < line.length(); i++)
        {
            if(line[i] == ',') // isdigit(line[i])
            {
                temp = line.substr(i+1); // substr(i)
                // cout << temp << endl;
                var = stoi(temp);
                // cout << var << endl;
                sum += var;
            }
        }
        // sum += var;
    }

    fin.close();
    ofstream fout;
    fout.open(filename, ios::app);

    fout << "Total: " << sum << endl;
    fout.close();
    
    
    // 5. close files
    
     
    return 0;
}
