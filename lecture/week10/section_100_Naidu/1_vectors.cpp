#include <iostream>
#include <vector>
using namespace std;


int main()
{  
   vector<int> vec1;   
   vec1.push_back(2); 
   vec1.push_back(10);
   vec1.push_back(11);
   vec1.push_back(20);
   // capacity
   for(int i = 0; i < vec1.size(); i++)
   {
      cout << vec1[i] << endl;
   }

   vector<bool> vec2 = {true, false};
   vec2.push_back(false);
   for(int i = 0; i < vec2.size(); i++)
   {
      cout << vec2.at(i) << endl;
   }
   // or use a range based loop
   for(bool v: vec2)
   {
      cout << v << endl;
   }

   cout << "range based for loop" << endl;
   vector<string> vec3 = {"CSCI", "APPM"};
   for(string v: vec3)
   {
      cout << v << endl;
   }

   return 0;
}


