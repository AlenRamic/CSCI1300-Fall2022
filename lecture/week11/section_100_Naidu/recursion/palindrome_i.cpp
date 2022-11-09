#include <string>
#include <iostream>

using namespace std;

bool isPalindrome(string str)
{
    for(int i = 0; i <= str.length()-1; i++)
    {
        if(str[i] != str[str.length()-1-i])
        {
            return false;
        }
   }
   return true;
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
