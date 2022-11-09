#include <iostream>
#include <string>
#include <cassert>
using namespace std;

string fizzBuzz(int);

int main()
{
    // write the tests here
    
    // 1. Test that the function exist
    int i = 7;
    fizzBuzz(i);
    cout << "Function exists" << endl;
    cout << "Function takes an int as parameter" << endl;
    
    // 2. Output “1” when I pass 1
    assert(fizzBuzz(1) == "1");
    cout << "Function works for 1" << endl;
    
    // 3. Output “2” when I pass 2
    assert(fizzBuzz(2) == "2");
    cout << "Function works for 2" << endl;
    
    // 4. Output “Fizz” when I pass 3
    assert(fizzBuzz(3) == "Fizz");
    cout << "Function works for 3" << endl;
    
    // 5. Output “Buzz” when I pass 5
    assert(fizzBuzz(5) == "Buzz");
    cout << "Function works for 5" << endl;
    
    // 6. Output “Fizz” when I pass 9
    assert(fizzBuzz(9) == "Fizz");
    cout << "Function works for 9" << endl;
    
    // 7. Output “Fizz” when I pass 10
    assert(fizzBuzz(10) == "Buzz");
    cout << "Function works for 10" << endl;
    
    // 8. Output “FizzBuzz” when I pass 15
    assert(fizzBuzz(15) == "FizzBuzz");
    cout << "Function works for 15" << endl;
    
    return 0;
    
}
string fizzBuzz(int num)
{
    if (num%3 == 0 && num%5 == 0)
    {
        return "FizzBuzz";
    }
    else if (num%3 == 0)
    {
        return "Fizz";
    }
    else if (num%5 == 0)
    {
        return "Buzz";
    }
    {
        return to_string(num);
    }
}