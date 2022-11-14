#include<iostream>
#include<chrono>
#include<thread>
 
using namespace std;
using namespace std::this_thread;     // sleep_for
using namespace std::chrono_literals;    // shorthand for nanaseconds(ns), microseconds(us) milliseconds(ms), seconds(s), minutes(min), hours(h), day(d) etc

// References:
// 1. Using threads to pause excution - https://java2blog.com/cpp-wait-seconds/#Wait_For_Seconds_Using_Thread_In_C
// 2. Using chrono literals from c++14 and onward - https://en.cppreference.com/w/cpp/symbol_index/chrono_literals

int main()
{
    int a, b, sum;
	cout<<"Calculating the sum of two numbers" << endl;
    cout<<"pausing execution for 5 seconds" << endl;
	sleep_for(5s); // sleep_for pausing execution for the duartion passed into the arguments 
    // refer to line 7 for other time options
    cout << "Enter two numbers" << endl;
    cin >> a >> b;
    cout << "Sum: " << a + b << "." << endl;
	return 0;
}