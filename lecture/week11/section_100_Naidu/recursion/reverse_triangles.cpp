#include <iostream>

using namespace std;

void printTriangle(int side_length)
{
   if (side_length < 1) 
   { 
      return; 
   }

   for (int i = 0; i < side_length; i++)
   {
      cout << "[]";
   }
   cout << endl;
   
   printTriangle(side_length - 1);
}


int main()
{
   printTriangle(4);
}