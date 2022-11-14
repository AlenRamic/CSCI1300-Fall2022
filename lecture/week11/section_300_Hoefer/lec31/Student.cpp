//SOLUTION

#include "Person.h"
#include "Student.h"

Student::Student()
{
   cout << "Student constructor" << endl;
}

void Student::setMajor(string subject)
{
   major_ = subject;
}

void Student::display() const
{
   Person::display();
   cout << "Major: " << major_ << endl;
}
