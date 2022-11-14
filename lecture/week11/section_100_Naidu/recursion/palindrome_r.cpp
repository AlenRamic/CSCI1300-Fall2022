#include <string>
#include <iostream>

using namespace std;

bool isPalindrome(string s)
{
   // Separate case for shortest strings
   if (s.length() <= 1 )
   { 
      return true; 
      
   }
   //Get first and last character, converted to lowercase
   char first = tolower(s[0]);
   char last = tolower(s[s.length() - 1]);

   if (first == last)
   {
      string shorter = s.substr(1, s.length() - 2);
      return isPalindrome(shorter);
   }
   else
   {
      return false;
   }
}
int main()
{
   cout << "Enter a string: ";
   string input;
   getline(cin, input);
   cout << input << " is ";
   if (!isPalindrome(input)) 
   { 
      cout << "not "; 
   } 
   cout << "a palindrome." << endl;
   return 0;
}
