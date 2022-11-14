#include <iostream>

using namespace std;

void printTriangle(int side_length)
{
   if (side_length < 1) 
   { 
      return; 
   } 

   printTriangle(side_length - 1);

   for (int i = 0; i < side_length; i++)
   {
      cout << "[]";
   }
   cout << endl;
}


int main()
{
    printTriangle(4);
}