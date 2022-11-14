#include <iostream>
using namespace std;

int main ()
{
  string full_name;

  // DO NOT USE BOTH cin and getline in the same program

  cout << "Enter your name: ";
  cin >> full_name;
  cout << full_name << endl;

  cout << "Enter your name: ";
  getline(cin,full_name);
  cout << full_name << endl;

  return 0;
}