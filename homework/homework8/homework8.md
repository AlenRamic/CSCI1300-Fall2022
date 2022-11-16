#### **CSCI 1300 CS1: Starting Computing**
#### **Naidu/Yeh/Hoefer - Fall 2022**
#### **Homework 8**
#### **Due: Friday, November 18, by 5 pm** 
<br>

# Table of contents

- [Table of contents](#table-of-contents)
- [Objectives <a name="objectives"></a>](#objectives)
- [Background <a name="background"></a>](#background)
  - [Recursion](#recursion)
- [Testing Functions](#tests)
    * [Void functions with printed output](#void)
    * [Non-void functions returning bool or int](#non-void-bool-int)
    * [Non-void functions returning double](#non-void-double)
- [Questions <a name="questions"></a>](#questions)
  - [Question 1 (7 points): digitsSuperSum Recursive <a name="q1"></a>](#q1) 
- [Submission Instructions <a name="submission"></a>](#submission)
  - [Checklist <a name="check"></a>](#check)
  - [Homework 8 points summary <a name="rubric"></a>](#rubric)

# Objectives <a name="objectives"></a>
1. Learn how to use recursive functions
2. Develop some methods that will be useful in your future!

# Background <a name="background"></a>
## **Recursion**

A recursive function is one which calls itself. Recursion can be used to accomplish a repetitive task, like loops. Indeed, it turns out that anything you can do with a loop, you could also do with recursion, and vice versa. However, some algorithms are much easier to express with loops, and others are much easier to express with recursion. You’ll want both in your toolkit to write elegant, simplistic, short code.

Every recursive function includes two parts:
* **base case:** A simple non-recursive occurrence that can be solved directly. Sometimes, there are multiple base cases.
* **recursive case:** A more complex occurrence that can be described using smaller chunks of the problem, closer to the base case.

To write a recursive function, we often use the following format:

```cpp
returnType functionName(arguments)
{
    if (/*baseCase?*/)
    {
        return /*baseCase result*/;
    } 
    else 
    {
        // some calculations, including a call to functionName
        // with “smaller” arguments.
        return /*general result*/
    }
}

```
Consider the following simple recursive function which calculates the sum of the numbers 1, 2, 3, …, n: 
```cpp
int numberSum(int n)
{
    if(n==0)
    { //base case
        return  0;
    }else
    { //recursive case
        int  sumForSmallerNumbers = numberSum(n-1);
        return (n + sumForSmallerNumbers);
    }
}
```
Consider this example; what does this function do?
```cpp
int sumNumsRecursive(int num)
{
    if (num == 0)
        return 0;

    else
        return num + sumNumsRecursive(num - 1);
}
```
The following examples show both the final returned value and intermediate recursive function calls.
For example, the first example reads:
“```sumNumsRecursive(3)``` returns ```3 + sumNumsRecursive(2)``` which returns ```2 + sumNumsRecursive(1)``` and that returns `1 + sumNumsRecursive(0)`.”

Example 1.
```
sumNumsRecursive(3)
    3 + sumNumsRecursive(2)
        2 + sumNumsRecursive(1)
            1 + sumNumsRecursive(0)
```
`sumNumsRecursive(0)` is our exit condition for the recursive function, so we return 0.
Therefore, the last function line in the example above will evaluate to `1`.
Because we know `sumNumsRecursive(1)` evaluates to 1, we also know that `sumNumsRecursive(2)` is equal to
`2 + sumNumsRecursive(1)`, which is `2+1` or `3`.
Lastly, `sumNumsRecursive(3)` can be evaluated to `3 + sumNumsRecursive(2)`, which is `3+3` or `6`.
`sumNumsRecursive(3)` will return `6`.

Example 2.
```
sumNumsRecursive(0)
    0
```

# Testing functions <a name="tests"></a>

Every C++ program you write should include a main function that tests the function you wrote.
There will be 3 different types of test cases you are expected to write depending on the return type of the function.
Listed below is how we expect you to test different types of functions. The process will be different
if you are testing a `void` function, a non-void function that return an `int` or `bool`, or a non-void function
that returns a `double`.

#### 1. Void Functions with printed output <a name="void"></a>

For **void** functions that have printed output (i.e. functions that use `cout` to print to the terminal), call the testing function in the main function. Your tests should include the expected output in comments.

See the sample code below:
```c++
void checkDiscount(double discount) 
{
    if (discount >= 50) 
    {
        cout << "Great discount!" << endl;
    } 
    else 
    {
        cout << "Not a great discount." << endl;
    }
    return;
}
int main() 
{
    // test 1 for checkDiscount
    // expected output: "Great discount!"
    checkDiscount(82.7);

    // test 2 for checkDiscount
    // expected output: "Not a great discount."
    checkDiscount(22);

    return 0;
}
```
_* For the purpose of this test code snippet, algorithm comments were not included, but they are still expected in your C++ files._


<br>


#### 2. Non-Void Functions returning bool or int <a name="non-void-bool-int"></a>

For functions that return a **bool, char or int**, use **assert statements** 
from the **cassert** library (`#include <cassert>`) with a conditional expression.

Assert statements contain a conditional expression which will evaluate to `true` if the function's actual output matches what's expected. If the conditional expression evaluates to `false`, then your program will stop running after printing an error message.

For the purpose of this project, functions that return a `bool`, `char` or `int` can be compared to a specific value using the equality operator `==`.

Your test will look something like this:

`assert(<function call> == <value to compare to>);`

* `<function call>` is where you will call the function you want to test with its function parameters.
* `<value to compare to>` is the value you expect the function to return.
* `==` is the equality operator, and it compares the equality of both sides of itself.

See the sample code below:
```c++
#include <iostream>
#include <cassert>
using namespace std;

int addInts(int num1, int num2)
{
    // add num1 and num2 before returning
    return num1 + num2;
}

// isDrivingAge() returns true if the given age passed as a parameter
// is greater than or equal to 16, otherwise it returns false.
bool isDrivingAge(int age)
{
    return age >= 16;
}

int main()
{
    // test 1 for addInts
    assert(addInts(5, 6) == 11);

    // test 2 for addInts
    assert(addInts(10, 10) == 20);

    // test 3 for drivingAge
    assert(isDrivingAge(17) == true);

    // test 4 for drivingAge
    assert(isDrivingAge(14) == false);
}
```
_* For the purpose of this test code snippet, algorithm comments were not included, but they are still expected in your C++ files._

<br>


#### 3. Non-Void Functions returning double <a name="non-void-double"></a>

For functions that return a **double**, you should use an **assert statement** from the **cassert** header (`#include <cassert>`) with a conditional expression like above. The difference is that you will also need to include the following function in your program:
```c++
/**
 * doublesEqual will test if two doubles are equal to each other within two decimal places.
 */
bool doublesEqual(double a, double b, const double epsilon = 1e-2)
{
    double c = a - b;
    return c < epsilon && -c < epsilon;
}
```
Because the `double` type holds so much precision, it will be hard to compare the equality of a function that returns a 
double with another double value. To overcome this challenge, we can compare `double` values within a certain range 
of precision or decimal places. The function above compares the equality of two variables `a` and `b` up to two decimal places, and returns `true` if the values of `a` and `b` are equal with each other up to two decimal places.

You will be expected to use this function in conjunction with `assert` statements to test functions that return 
the type double.

Your test will look something like this: 

`assert(doubles_equal(<function call>, <value to compare to>));`

 * `<function call>` is where you will call the function you want to test with its function parameters 
 * `<value to compare to>` is the `double` value you expect the function to return.


See the sample code below:
```c++
#include <iostream>
#include <cassert>
using namespace std;
/**
 * doublesEqual will test if two doubles are equal to each other within two decimal places.
 */
bool doublesEqual(double a, double b, const double epsilon = 1e-2)
{
    double c = a - b;
    return c < epsilon && -c < epsilon;
}
/**
 * reciprocal returns the value of 1 divided by the number passed into the function.
 */
double reciprocal(int num)
{
    return 1.0 / num;
}
int main()
{
    // test 1 for reciprocal
    assert(doublesEqual(reciprocal(6), 0.16));
    // test 2 for reciprocal
    assert(doublesEqual(reciprocal(12), 0.083));
}
```
For test 1, `reciprocal(6)` is being called, and we expect the function to return the value `0.16`.
The return value of `reciprocal(6)` and `0.16` is passed in as parameters to the `doublesEquals` function,
which will then return `true` if these two values are equal or `false` if they are not.

_* For the purpose of this test code snippet, algorithm comments were not included, but they are still expected in your C++ files._


## **Question 1 (7 points): digitsSuperSum Recursive** <a name="q1"></a>

Write a function ```digitsSuperSumRecursive``` which takes the parameter N (which is a positive integer) and returns its super sum. A super sum is defined using the following rules:
* If _N_ has only 1 digit, its super sum is _N_.
* If _N_ has more than 1 digit, then the super sum of _N_ is equal to the super sum of the sum of the digits of _N_. 

Your goal is to make _N_ only have 1 digit following the rules above.

You should only use ***recursion*** for this question. Your code ***will not be accepted if it uses loops.***

**Sample run 1:**
```
Input:
4567
Output:
4
```
Explanation: 
```
digitsSuperSumRecursive(4567) = 4+5+6+7 = 22
digitsSuperSumRecursive(22) = 2+2=4
digitsSuperSumRecursive(4) = 4
```

**Sample run 2:**
```
Input:
9
Output:
9
```
Your file should be named digitsSuperSumRecursive.cpp and should also include a main function that tests your `digitsSuperSumRecursive()` function. Once you have finished developing and testing your solution in VSCode you should head over to the CodeRunner on Canvas and paste only your **digitsSuperSumRecursive()** function into the answer box for question 1.


# Submission Instructions <a name="submission"></a>

## Checklist <a name="check"></a>

Here is a checklist for submitting the assignment:

1.  **CodeRunner**. The correctness of your program will be graded by Coderunner. You can modify your code and re-submit (press “Check” again) as many times as you need to, until the assignment due date. Use the solutions you created in VSCode to complete the assignment **Homework 8 - CodeRunner** on Canvas (modules -> week 13)

2.  **C++ files**. When you are finished with the question, zip your .cpp file. Submit the single zip file under the assignment **"Homework 8"** on Canvas.
    * The file should be named as specified in each question, and they should compile and run on Coderunner (pass all test cases) and in VSCode to earn full points.
    * Our TAs will be grading the style of your code and comments. Please see the style guide on Canvas for more details.
    * At the top of each file, write your name in the format shown below.
    * Your C++ program for each question should also contain a main that tests the function you wrote, like below. **You should include at least 4 test cases for each function.** In general, we recommend you try to include as many test cases as you believe are necessary to ensure that your code works properly. Deciding on how many test cases to include is an important skill to learn, since the number of necessary test cases can change between programs. See [testing functions](#tests) for examples demonstrating testing arrays.
    * Please be sure to also include function headers that contain the algorithm implemented within the function, expressed in pseudocode. You can refer to the example below for more details.

    * **Style Example:**
![style example](images/style.jpg)


    * The zip file should be named, **hmwk8_lastname.zip**. It should have the following zipfiles:    
        * digitsSuperSumRecursive.cpp 
       
---

## Homework 8 points summary <a name="rubric"></a>

|Criteria|Points|
|--|--|
| Question 1                  | 7    |
|C++ File submission (Style, Comments, Tests and Driver files)|3|
|Recitation attendance|-3|
|Total|10|

*if your attendance is not recorded, you will lose points. Make sure your attendance is recorded on Canvas. 
