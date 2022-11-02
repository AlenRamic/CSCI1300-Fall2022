#include <iostream>
#include <time.h>       /* clock_t, clock, CLOCKS_PER_SEC */
using namespace std;
/**
   Computes a Fibonacci number.
   @param n an integer
   @return the nth Fibonacci number
*/
long int fib_r(int n)
{
   //cout << "Entering fib: n = " << n << endl;
   long int f;  
   if (n <= 2) 
   { 
      f = 1; 
   }
   else { 
      f = fib_r(n - 1) + fib_r(n - 2); 
   }
   //cout << "Exiting fib: n = " << n
   //   << " return value = " << f << endl;
   return f;
}

int main()
{
   cout << "Enter n: ";
   int n;
   cin >> n;
   clock_t t = clock();
   long int f = fib_r(n);
   t = clock() -t;
   cout << (float)t/CLOCKS_PER_SEC  << "seconds" << endl;
   cout << "fib(" << n << ") = " << f << endl;
   return 0;
}
