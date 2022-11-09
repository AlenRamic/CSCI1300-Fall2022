#include <iostream>
#include <vector>
using namespace std;


void displayVector(vector<int> temp)
{
   for(int v: temp)
   {
      cout << v << endl;
   }
}
// overloaded function
void displayVector(vector<double> temp)
{
   for(double v: temp)
   {
      cout << v << endl;
   }
}

int main()
{  
   vector<int> vec1;   
   vec1.push_back(2); 
   vec1.push_back(10);
   vec1.push_back(11);
   vec1.push_back(20);
   vec1.push_back(200); 
   vec1.push_back(100);
   vec1.push_back(11);
   vec1.push_back(2000);
   // capacity
   cout << "Size: " << vec1.size() << "Capacity: " << vec1.capacity() <<endl;
   vec1.pop_back();
   // resize 
   vec1.resize(20); // modifies size of vector
   // vec1.pop_back();
   cout << "Size: " << vec1.size() << "Capacity: " << vec1.capacity() <<endl;

   vector<int> vec2 = vec1; // copy an array using =

   // compare vectors
   if(vec1 == vec2)
   {
      cout << "Both vectors are equal" << endl;
   }
   cout << "display vector before erasing" << endl;
   displayVector(vec1);
   // erasing elements in vector
   // erase (1st) element
   cout << "erasing elements" << endl;
   vec1.erase(vec1.begin()); // vec.begin returns 1st(index 0) element in vector vec

   // erase the (2nd) element
   vec1.erase(vec1.begin()+1);

   // erase the (2nd and 3rd) element
   vec1.erase(vec1.begin()+1, vec1.begin()+2);
   cout << "display vector after erasing" << endl;
   displayVector(vec1);
   
   return 0;
}


