#include <iostream>
#include <time.h>       /* clock_t, clock, CLOCKS_PER_SEC */
using namespace std;
/**
   Computes a Fibonacci number.
   @param n an integer
   @return the nth Fibonacci number
*/
long int fib_i(int n)
{
   if (n <= 2) 
   { 
      return 1; 
      
   }
   long int fold = 1;
   long int fold2 = 1;
   long int fnew;
   for (int i = 3; i <= n; i++)
   {
      fnew = fold + fold2;
      fold2 = fold;
      fold = fnew;
   }
   return fnew;
}
int main()
{
   cout << "Enter n: ";
   int n;
   cin >> n;
   clock_t t = clock();
   long int f = fib_i(n);
   t = clock() -t;
   cout << (float)t/CLOCKS_PER_SEC  << "seconds" << endl;
   cout << "fib(" << n << ") = " << f << endl;
   return 0;
}