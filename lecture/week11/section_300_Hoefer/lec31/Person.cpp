//SOLUTION

#include "Person.h"

Person::Person()
{
   cout << "Person constructor" << endl;
}

void Person::setName(string person_name)
{
   name_ = person_name;
}

void Person::setBirthday(string date)
{
   birthday_ = date;
}

void Person::display() const
{
   cout << "Name: " << name_ << endl;
   cout << "Birthday: " << birthday_ << endl;
}
