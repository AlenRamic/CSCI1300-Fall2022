//SOLUTION
#include <iostream>
#include <string>
using namespace std;
#include "Student.h"
#include "Person.h"
#include "Instructor.h"
int main()
{
   Person maxwell;
   Instructor margy;
   Student jonathan;

   maxwell.setName("Maxwell Smith");
   maxwell.setBirthday("November 23, 1978");

   margy.setName("Margy Smith");
   margy.setBirthday("December 21, 1972");
   margy.setSalary(50000);

   jonathan.setName("Jonathan Smith");
   jonathan.setBirthday("June 12, 1979");
   jonathan.setMajor("Computer Science");

   maxwell.display();
   cout << endl;
   margy.display();
   cout << endl;
   jonathan.display();
   cout << endl;

   return 0;
}
