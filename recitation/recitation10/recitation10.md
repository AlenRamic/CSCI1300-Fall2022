#### **CSCI 1300 CS1: Starting Computing**
#### **Naidu/Yeh/Hoefer - Fall 2022**
#### **Recitation 10 - week of October 31st, 2022**

# Table of contents
1. [Vectors](#vectors)
2. [Exercises](#exercises)
   1. [Working with vectors](#working_with_vectors)
   2. [Spot the errors](#errors)
   3. [Fibonacci Series](#fib)
3. [Deliverables for Recitation](#deliverables) 

# Vectors <a name="vectors"></a>

Last week in the lecture, we learned about the basics of vectors. A vector is a useful data structure to use when we don’t know how many pieces of information we want to store. Today, let’s solve some problems related to vectors.

# Exercises <a name="exercises"></a>


## 1. Working with vectors<a name="working_with_vectors"></a>

In this problem, you will write a program to
1. accept 15 floating point values from the user and store it in a vector
2. find the average of all the values in the vector
3. remove all elements that are less than the calulated average
<br />
Each of these three requirements should be implemented in individual functions. The parameters and return types of these functions are up to you. The full solution should consist of a `main` function which drives the program, using the three functions written for each sub-task and outputting the result at each stage.

### 1a. Write three algorithms in pseudocode for the three taks above. 
-----------------------------
**Pseudocode:**
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>


### 1b. Imagine how a sample run of your program would look like. Think about at least two examples.

-----------------------------
**Sample Run 1:**
<br/><br/>
<br/><br/>

-----------------------------
**Sample Run 2:**
<br/><br/>
<br/><br/>

-----------------------------
**Sample Run 3:**
<br/><br/>
<br/><br/>

### 1c. Identify the values that you must test for. We call these values “boundary conditions”.

-----------------------------
**Answer:**
<br/><br/>
<br/><br/>

### 1d. Implement your solution in C++ using VS  Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make you sure you test for the values used in your sample runs, and for the boundary conditions.



## 2. Spot the errors <a name="errors"></a>

### 2a.
```cpp
#include <vector>
#include <iostream>

// appends the second vector on the first, returns the combined vector
vector<int> appendVectors(vector<int> first, vector<int> second){
	int size = vector.size(second);
	for (int i = 0; i < size; i++){
    		first.append(second[i]);
	}
	return second;
}
```
### 2b.
```cpp
#include <vector>
using namespace std;

// calls the function from (A). Assume A is already fixed
// prints out the combined vector
int main(){
	vector<int> vect1
	vect1.push_back(10)
	vect1.push_back(20)
	vector<int> vect2;
	vect2.push_back(1);
	vect2.push_back(2);
cout << appendVectors(vect1, vect2) << endl;
	return 0;
}

```

## 3. Fibonacci Series <a name = "fib"></a>

Write a function to fill a vector with the first n numbers in the Fibonacci sequence. Your main function should prompt the user to input the desired n. If n is positive, you program should fill a vector with the first n numbers in the Fibonacci sequence, and then print out the entries in the vector. If n is not positive, your program should print `Invalid input.` and terminate (stop running). You can read all about [Fibonacci numbers](https://en.wikipedia.org/wiki/Fibonacci_number) here. In summary, nth number in the series is the sum of (n-1)th and (n-2)th number i.e

fib(n) = fib(n-1) + fib(n-2)

Given fib(0) = 0, fib(1) = 1 and fib(2) = 1


### 3a. Write an algorithm in pseudocode for the program above. 
-----------------------------
**Pseudocode:**
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

### 3b. Let’s draw a flowchart of the solution.

-----------------------------
**Flowchart:**
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>


### 3c. Imagine how a sample run of your program would look like. Think about at least two examples.

-----------------------------
**Sample Run 1:**
<br/><br/>
<br/><br/>

-----------------------------
**Sample Run 2:**
<br/><br/>
<br/><br/>

-----------------------------
**Sample Run 3:**
<br/><br/>
<br/><br/>

### 3d. Identify the values that you must test for. We call these values “boundary conditions”.

-----------------------------
**Answer:**
<br/><br/>
<br/><br/>

### 3e. Implement your solution in C++ using VS  Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make you sure you test for the values used in your sample runs, and for the boundary conditions.


## Deliverables
Complete the recitation 10 quiz on [Canvas](https://canvas.colorado.edu/courses/85979/quizzes/287093?module_item_id=4110365).

