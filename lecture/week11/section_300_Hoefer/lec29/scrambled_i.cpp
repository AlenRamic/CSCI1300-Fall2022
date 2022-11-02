#include <string>
#include <iostream>
#include <cmath>
#include<algorithm>
#include<vector>

using namespace std;

string scrambled(string s)
{
   string newS = "";
   vector<int> alreadyPicked;
   
   while(alreadyPicked.size() != s.length())
   {
      //Get a random integer between 0 and length-1
      int r = rand()%(s.length());
      
      // Check it has not already been picked
      while (find(alreadyPicked.begin(), alreadyPicked.end(), r) != alreadyPicked.end())
      {
         r = rand()%(s.length());
      }
      newS = newS + s[r];
      alreadyPicked.push_back(r);
   }
   return  newS;
}
int main()
{
   srand(time(0));
   cout << "Enter a string: ";
   string input;
   getline(cin, input);
   cout << input << " scrambled is " << scrambled(input) << endl;
   return 0;
}