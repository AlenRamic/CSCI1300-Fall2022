//SOLUTION

#include "Person.h"
#include "Instructor.h"

Instructor::Instructor()
{
   cout << "Instructor constructor" << endl;
   salary_ = 0.0;
}

void Instructor::setSalary(double amount)
{
   salary_ = amount;
}

void Instructor::display() const
{
   Person::display();
   cout << "Salary: " << salary_ << endl;
}
