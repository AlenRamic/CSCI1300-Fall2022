#include <string>
#include <iostream>
#include <cmath>

using namespace std;

string scrambled(string s)
{
   // Separate case for shortest string
   if (s.length() == 1 )
   { 
      return s; 
      
   }
   //Get a random integer between 0 and length-1
   int r = rand()%(s.length());
   return  s[r] + scrambled(s.substr(0,r) + s.substr(r+1));
}
int main()
{
   cout << "Enter a string: ";
   string input;
   getline(cin, input);
   cout << input << " scrambled is " << scrambled(input) << endl;
   return 0;
}