//SOLUTION
/*
Recursive function
   string reverse(string str)
computes the reverse of a string. For example, reverse("flow") should return "wolf".
Hint: Reverse the substring starting at the second character, 
then add the first character at the end. 
For example, to reverse "flow", first reverse "low" to "wol", then add the "f" at the end.
 */

#include <iostream>
#include <string>

using namespace std;

/**
Reverses a string recursively.
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
      return reverse(str.substr(1, str.length() - 1))
         + str.substr(0, 1);
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
