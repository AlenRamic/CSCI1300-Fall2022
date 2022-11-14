#include <iostream>
#include <vector>
using namespace std;


int main()
{ 
    // capacity vs size
    vector<int> vec1;   
    vec1.push_back(2);
    cout << "Size: " << vec1.size() << "Capacity: " << vec1.capacity() <<endl;
    vec1.push_back(10);
    cout << "Size: " << vec1.size() << "Capacity: " << vec1.capacity() <<endl;
    vec1.push_back(11);
    cout << "Size: " << vec1.size() << "Capacity: " << vec1.capacity() <<endl;
    vec1.push_back(20);
    cout << "Size: " << vec1.size() << "Capacity: " << vec1.capacity() <<endl;
    vec1.push_back(10);
    cout << "Size: " << vec1.size() << "Capacity: " << vec1.capacity() <<endl;
    vec1.push_back(10);
    cout << "Size: " << vec1.size() << "Capacity: " << vec1.capacity() <<endl;
    vec1.push_back(10);
    cout << "Size: " << vec1.size() << "Capacity: " << vec1.capacity() <<endl;
    vec1.push_back(10);
    cout << "Size: " << vec1.size() << "Capacity: " << vec1.capacity() <<endl;
    vec1.push_back(10);
    cout << "Size: " << vec1.size() << "Capacity: " << vec1.capacity() <<endl;
    vec1.push_back(10);
    cout << "Size: " << vec1.size() << "Capacity: " << vec1.capacity() <<endl;
    vec1.push_back(10);
    cout << "Size: " << vec1.size() << "Capacity: " << vec1.capacity() <<endl;
    vec1.push_back(10);
    cout << "Size: " << vec1.size() << "Capacity: " << vec1.capacity() <<endl;
    vec1.push_back(10);
    cout << "Size: " << vec1.size() << "Capacity: " << vec1.capacity() <<endl;
    return 0;
}