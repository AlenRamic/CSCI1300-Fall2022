//SOLUTION
#ifndef PERSON_H
#define PERSON_H

// Classes Person, Student, and Instructor.

#include <string>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

/**
   A class representing a person with a name and a birthday.
*/
class Person
{
public:
   /**
      Constructs a person with an empty name and birthday.
   */
   Person();

   /**
      @param person_name the name of this person
   */
   void setName(string person_name);

   /**
      @param date string containing birthday info
   */
   void setBirthday(string date);

   /**
      Displays the person's info.
   */
   void display() const;

private:
   string name_;
   string birthday_;
};

#endif
