//SOLUTION
#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include "Person.h"

/**
   A class representing an instructor.
*/
class Instructor : public Person
{
public:
   /**
      Constructs an Instructor with an empty salary.
   */
   Instructor();

   /**
      @param amount the person's salary
   */
   void setSalary(double amount);

   /**
      Displays the Instructor's info.
   */
   virtual void display() const;

private:
   double salary_;
};


#endif
