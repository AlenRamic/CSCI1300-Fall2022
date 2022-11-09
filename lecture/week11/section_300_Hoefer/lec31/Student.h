//SOLUTION
#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
/**
   A class representing a student.
*/
class Student : public Person
{
public:
   /**
      Constructs a student.
   */
   Student();

   /**
      @param subject the person's major
   */
   void setMajor(string subject);

   /**
      Displays the student's info.
   */
   virtual void display() const;

private:
   string major_;
};

#endif
