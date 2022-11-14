#include <cctype>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
   string line; // variable to store file data
   double total = 0; // variable to store sum

   // 1. create file stream objects/variables 
   // ifstream means input file stream - used for reading from files
   ifstream fin;
   
   // oftsream means output file stream - used for writing to files
   ofstream fout;
   
   // 2. Associate the file stream object with the file
   //    by using .open(), with the file name (as a string) in parentheses
 
   fin.open("sales2.txt"); // Open input file
   fout.open("sales_avg.txt"); // Open output file

   // 3. Check if file was opened
   if (fin.fail())
   {
      cout << "File couldn't be opened!" << endl;
      return -1; // return because I don't want my program to continue if file wasn't opened successfully
      // -1 to indicate the program didn't execute successfully
   }
   
   // process the header and do nothing
   getline(fin, line);
    // we process the header before the while loop because our loop only processes numeric data
    // when our loop code tries to process non-numeric data we would get the follwoing error
        // libc++abi: terminating with uncaught exception of type std::invalid_argument: stod: no conversion
        // zsh: abort      ./a.out
   
   // 3. Read lines from file
   while (!fin.eof())  // as long as there is data to read from file, loop will execute
   {
      // read one line at a time
      getline(fin, line);
      // process each line, search for a number
      int i = 0;
      while(!isdigit(line[i])) // find the index where the number begins
      {
         i++;
      }
 
      string sales = line.substr(i);

      total+=stod(sales);
   }
   // 5. Write things to the output file (if necessary)
   fout << "Total: " << total;
   
   // 7. close files
   fin.close();
   fout.close();
   return 0;
}
