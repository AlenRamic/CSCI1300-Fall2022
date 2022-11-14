//SOLUTION
/*
Iterative function
   string reverse(string str)
computes the reverse of a string. For example, reverse("flow") should return "wolf".
Hint: add one character at a time, at the beginning of a new string, which you will return*/

#include <iostream>
#include <string>

using namespace std;

/**
Reverses a string iteratively.
@param str a string
@return the reversed string
*/
string reverse(string str)
{
   if (str.length() == 1)
   {
      return str;
   }
   else
   {
      string returnStr = "";
      for (int i = 0; i < str.length(); i++)
      {
         returnStr = str[i] + returnStr;
      }
      return returnStr;
   }
}

int main()
{
   cout << "Enter a string: ";
   string input;
   getline(cin, input);

   cout << "The string reversed is " << reverse(input) << endl;
   return 0;
}
