#include <iostream>

using namespace std;

void print_triangle(int side_length)
{
   if (side_length < 1) 
   { 
      return; 
   } 

   print_triangle(side_length - 1);

   for (int i = 0; i < side_length; i++)
   {
      cout << "[]";
   }
   cout << endl;
}


int main()
{
    print_triangle(4);
}