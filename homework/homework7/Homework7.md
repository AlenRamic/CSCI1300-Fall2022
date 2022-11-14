#### **CSCI 1300 CS1: Starting Computing: Homework 7**
#### **Naidu/Yeh/Hoefer - Fall 2022**
#### **Due: Friday, November 4th, by 5pm MST**
#### **(2 extra-credit points if Coderunner (Start Early) is completed by Wednesday, November 2nd 11:59pm)**
<br>

# Table of contents

1. [Objectives](#objectives)
2. [Background](#background)
3. [Testing Functions](#tests)
    * [Void functions with printed output](#void)
    * [Non-void functions returning bool or int](#non-void-bool-int)
    * [Non-void functions returning double](#non-void-double)
4. [Questions](#questions)
    * [Problem 1](#q1)
    * [Problem 2](#q2)
    * [Problem 3](#q3)
5. [Submission Instructions](#submission)
    * [Checklist](#check)
    * [Grading rubric](#rubric)

# Objectives <a name="objectives"></a>
1. Understand vectors

# Background <a name="background"></a>
## **Vectors**

Let's start with something we already know about - Arrays. 

To recap, an array is a contiguous series that holds a *fixed number of values* of the same datatype. 

A vector is a template class that uses all of the syntax that we used with vanilla arrays, but adds in functionality that relieves us of the burden of keeping track of memory allocation for the arrays. It also introduces a bunch of other features that makes handling arrays much simpler. 

First things first. We need to include the appropriate header files to use the vector class.
```cpp
#include <vector>
```
We can now move on to declaring a vector. This is general format of any vector declaration:
```cpp
vector <datatype_here> name(size);
```
The *size* field is optional. Vectors are dynamically-sized, so the size that you give them during initialization isn't permanent - they can be resized as necessary.

You can access elements of a vector in the same way you would access elements in an array, for example `array[4]`. Remember, indices begin from 0.

The C++ vector class comes with [several member functions] (https://www.cplusplus.com/reference/vector/vector/vector/), but following are the ones you will need in this week:

* ```size()``` return the size of a vector
* ```at()``` takes an integer parameter for index and returns the value at that position

Adding elements to the vector is done primarily using two functions

* ```push_back()``` takes in one parameter (the element to be added) and appends it to the end of the vector.
```cpp
vector <int> vector1; // initializes an empty vector
vector1.push_back(1); //Adds 1 to the end of the vector. 
vector1.push_back(3); //Adds 3 to the end of the vector. 
vector1.push_back(4); //Adds 4 to the end of the vector. 
cout<< vector1.size(); //This will print the size of the vector - in this case, 3.
// vector1 looks like this: [1, 3, 4]
```

* ```insert()``` can add an element at some position in the middle of the vector.
```cpp
// vectorName.insert(vectorName.begin() + position, element)
vector1.insert(vector1.begin() + 1, 2);
cout << vector1.at(1) << endl; // 2 is at index=1
// vector1 looks like this: [1, 2, 3, 4]
```
Here, the ```begin``` function returns an iterator to the first element of the vector. Due to the nature of an iterator, this allows for the utility of using ```begin()``` to refer to the first element and ```begin()+k``` would refer to the kth element in the vector, starting at 0.

Elements can also be removed.

* ```pop_back()``` deletes the last element in the vector
```cpp
vector <int> vector1; // initializes an empty vector
vector1.push_back(1); //Adds 1 to the end of the vector. 
vector1.push_back(3); //Adds 3 to the end of the vector. 
vector1.push_back(4); //Adds 4 to the end of the vector. 
vector1.pop_back(); //Removes the last element of the vector.
//vector1 looks like this: [1, 3]
```


* ```erase()``` can delete a single element at some position, which is shown below using the iterator function of ```begin()``` to erase the first element of the vector.
```cpp
// vector_name.erase(vector_name.begin() + position)
vector1.erase(vector1.begin() + 0);
cout << vector1.at(0) << endl; //2 is at index=0
// vector1 looks like this: [2, 3, 4]
```

It may be useful to think of vectors relationship to arrays as something similar to strings vs arrays of characters; they are similar concepts, but with added utility and flexibility that is helpful. Vectors are also passed by value (like strings) instead of passed by reference (like arrays). This might look something like:

```cpp
void myVecEditFunction(vector <int> vec){
   vec.erase(vec.begin());
   //vec now contains the original vector minus the starting element
}

...

int main(){
   vector <int> originalVector = {1, 2, 3};
   myVecEditFunction(originalVector);
   //originalVector still looks like [1, 2, 3]
}


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
<br>


# Questions <a name="questions"></a>

### **Problem 1 (4 points): Sum vector elements** <a name="q1"></a>

Write a function `sumElements` which performs an addition operation on the elements in a vector if their indices are between `start_index` and `end_index`. 

* Function Specifications:
    * The function name: **sumElements**
    * The function parameters in this order:
        * `vector<int>` vect: a vector of integers
        * `int` start_index: the lower bound of the range of indices for the vector, `vect`
        * `int` end_index: the higher bound of the range of indices for the vector, `vect`
    * The function returns an integer depending on the following conditions:
        * It returns the sum of all elements in the vector(inclusive of start_index and end_index)
        * It returns -1 if start_index is greater than end_index
        * It returns -2 if either or both start_index and end_index exceed the bounds of the vector

**Sample run 1:**
```cpp
vector<int> vect1{10, 20, 30, 40, 50};
int start_index = 1, end_index = 3;
cout << sumElements(vect1, start_index, end_index) << endl;
```
Output:
```
90
```

**Sample run 2:**
```cpp
vector<int> vect2{1, 2, 3, 4, 5, 6, 7, 8, 9};
int start_index = 5, end_index = 3;
cout << sumElements(vect2, start_index, end_index) << endl;
```
Output:
```
-1
```

**Sample run 3:**
```cpp
vector<int> vect3{2, 4, 6, 8, 10, 12, 14, 16, 18};
int start_index = 3, end_index = 15;
cout << sumElements(vect3, start_index, end_index) << endl;
```
Output:
```
-2
```

Your file should be named sumElements.cpp and should also include a main function that tests your `sumElements()` function. Once you have finished developing and testing your solution in VSCode you should head over to the CodeRunner on Canvas and paste only your **sumElements()** functions into the answer box for question 1.

### **Problem 2 (7 points): Read a DNA Sequence until STOP codon** <a name="q2"></a>

DNA sequences are a series of four letters: A, C, G, and T. When our body is reading these sequences, it reads them in sets of three, which are referred to as codons. 
Each codon tells your body to do one of three things: 
1) Start reading, 
2) Add a molecule to the sequence, 
3) Stop reading. 


**The START codon is ATG, and the STOP codons are either TAA, TAG, or TGA; any of those three will stop it.** Every other combination of A/C/G/T will add a different molecule to the sequence.

Write a function ```dnaRead``` which takes a vector of strings, each of length 3, as the parameter and returns the DNA sequence between the start and stop codons, with the following qualities:

* Function Specifications:
    * The function name: **dnaRead**
    * The function parameters in this order:
        * `vector<string>` dna: a vector of strings each of length 3, only containing A/C/G/T
    * The function returns a string:
        * If any vector element is not length 3 or contains a character that is none of A, C, G, or T, return "Invalid sequence." All letters should be capitals.
        * It returns the combined DNA sequence between the start and stop codons, EXCLUSIVELY. 
        * If there is no start codon, it returns the empty string, "".
        * If there is no stop codon, it returns a string containing every codon in the vector that occurs after the start codon.  
<br />

**Sample run 1:**
```cpp
vector<string> dna{"ATG", "TCA", "TAA"};
cout << dnaRead(dna) << endl;
```
Output:
```
TCA
```

**Sample run 2:**
```cpp
vector<string> dna{"ATG", "CAT", "ACT", "GAC", "TAA", "ACT", "TAC"};
cout << dnaRead(dna) << endl;
```
Output:
```
CATACTGAC
```

**Sample run 3:**
```cpp
vector<string> dna{"CAT", "ACT", "GAC", "TAA", "ACT", "TAC"};
cout << dnaRead(dna) << endl;
```
Output:
```

```

**Sample run 4:**
```cpp
vector<string> dna{"CAT", "AT", "GAC", "TAA", "ACT", "TAC"};
cout << dnaRead(dna) << endl;
```
Output:
```
"Invalid Sequence"
```

Your file should be named dnaRead.cpp and should also include a main function that tests your `dnaRead()` function. Once you have finished developing and testing your solution in VSCode you should head over to the CodeRunner on Canvas and paste only your **dnaRead()** functions into the answer box for question 2.

### **Problem 3 (9 points): Card Game** <a name="q3"></a>

You are writing a card game loosely modeled on the classic game "WAR". Your partner starts with a deck of cards that they turn over one at a time. If they enter an ace, you will take the two bottom cards from their pile. If they enter any classic face card, which is a Jack, Queen, or King, you will take two cards from the top of their pile. The game ends when they turn over a Joker, which won't be counted. Whoever has more cards wins. 

We will start by assigning each card value a numeric representation. Aces will be represented with a 1, twos with a 2, and so on. Jacks will be represented with 11, Queens with 12, Kings with 13, and Jokers with 14. The suit of the card does not matter. We also do not care if they are playing with a standard card deck (i.e., with only 4 of each type), so do not worry about the total number of cards played.

The way you will turn this into code is to write a program (i.e. `main` function) that asks the user to repeatedly enter positive integers between 1 and 14, stopping when the user enters 14. If a number outside of this range is entered, the program should output "The number must be between 1 and 14", and then prompt the user for the next number. 

You need to use a vector in this question to store your partner's cards, and a counter to store your own. At the beginning of the program, the vector is empty. Then, as the user enters values, the vector will be updated based on the following conditions **in this order (1, 2, 3, 4):** 
1. Add the card value to the end of the vector. 
2. If the card value is 1, remove the first two elements from the **start** of the vector and increment your counter by two. If there is only one element in the vector, only remove that element and increment the counter by one.
3. If the card value is 11, 12, or 13, remove the last two elements from the **end** of the vector and increment your counter by two. If there is only one element in the vector, only remove that element and increment the counter by one.
4. If the card value is 14, remove that card value from the vector but do **not** increment your counter.

After the Joker is added,  your program should display all elements in the vector, in order, separated by spaces. On the next line, you should print the counter. You will then compare your counter to the size of your vector to determine the victor. 
1. If the counter is higher than the vector length, print "I win!"
2. If the counter is lower than the vector length, print "You win!"
3. If the counter is equal to the vector length, print "Tie!"

**Sample run 1:**
```
Please enter a number:
3
Please enter a number:
4
Please enter a number:
1
Please enter a number:
5
Please enter a number:
8
Please enter a number:
-4
The number should be an integer between 1 and 14.
Please enter a number:
10
Please enter a number:
14
Your cards remaining are: 1 5 8 10
I have 2 card(s).
You win!
```

**Sample run 2:**
```
Please enter a number:
14
Your remaining cards are: 
I have 0 card(s).
Tie!
```

**Sample run 3:**
```
Please enter a number:
11
Please enter a number:
8
Please enter a number:
7
Please enter a number:
3
Please enter a number:
12
Please enter a number:
4
Please enter a number: 
5
Please enter a number: 
13
Please enter a number:
14
Your remaining cards are: 8 7 4
I have 5 card(s).
You win!
```

Your file should be named cardGame.cpp. Once you have finished developing and testing(no asserts) your solution in VSCode you should head over to the CodeRunner on Canvas and paste your full program into the answer box for question 3.

# Submission Instructions <a name="submission"></a>

## Checklist <a name="check"></a>

Here is a checklist for submitting the assignment:

1.  **CodeRunner**. The correctness of your program will be graded by Coderunner. You can modify your code and re-submit (press “Check” again) as many times as you need to, until the assignment due date. Use the solutions you created in VSCode to complete the assignment **Homework 7 - CodeRunner** on Canvas (modules -> week 11)
    * Remember that submitting **Homework 7 - Coderunner(Start Early)** by Wednesday, November 2nd at 11:59pm will give extra credit! 

2.  **C++ files**. When you are finished with all the questions, zip all of your .cpp files together. Submit the single zip file under the assignment **"Homework 7"** on Canvas.
    * All files should be named as specified in each question, and they should compile and run on Coderunner (pass all test cases) and in VSCode to earn full points.
    * Our TAs will be grading the style of your code and comments. Please see the style guide on Canvas for more details.
    * At the top of each file, write your name in the format shown below.
    * Your C++ program for each question should also contain a main that tests the function you wrote, like below. **You should include at least 3 test cases for each function.** In general, we recommend you try to include as many test cases as you believe are necessary to ensure that your code works properly. Deciding on how many test cases to include is an important skill to learn, since the number of necessary test cases can change between programs. See [testing functions](#tests) for examples demonstrating testing functions with various return types.
    * Please be sure to also include function headers that contain the algorithm implemented within the function, expressed in pseudocode. You can refer to the example below for more details.

    * **Style Example:**
![style example](images/style.jpg)


    * The zip file should be named, **hmwk7_lastname.zip**. It should have the following 3 files:    
        * sumElements.cpp
        * dnaRead.cpp
        * cardGame.cpp
        
---

## Homework 7 points summary <a name="rubric"></a>

|Criteria|Points|
|--|--|
| Question 1                  | 4    |
| Question 2                  | 7    |
| Question 3                  | 9   |
|C++ File submission (Style, Comments, Tests and Driver files)|10|
|Recitation attendance|-10|
|Total|30|

*if your attendance is not recorded, you will lose points. Make sure your attendance is recorded on Canvas. 
