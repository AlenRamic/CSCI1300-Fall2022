#### **CSCI 1300 CSC1: Starting Computing**
#### **Naidu/Yeh/Hoefer - Fall 2022**
#### **Recitation 12 - Week of November 14th, 2022**

# Table of contents

1. [Question 1 -Probability](#prob)
2. [Question 2 -Recursion ](#recursion)
3. [Deliverables](#deliverables)

## 1. Probability <a name="prob"></a>

You’re playing darts with an oddly-shaped dart board. The board is in the shape of a square, with a shaded circle somewhere inside it. The size of the circle is randomly generated, but you know its radius will be smaller than ½ the length of one side of the square.

Every time you throw a dart, assume that you are guaranteed to land inside the square, but you have an equal chance of landing anywhere inside it.

<img src="rec12.png" width="30%">

Write a function that accepts a single parameter, `double side_length`. This will be the length of one side of the square. Then, your function should randomly generate a radius for the circle, which must be less than (side_length/2). Print this radius: "The radius of the circle is: ." Finally, calculate the probability of landing in the circle if you throw one dart (which is equally likely to hit anywhere in the square). Print this value as a double between 0 and 1. "The probability of landing in the circle is: "

You should also write a main function which prompts the user to input a value for the side length of the square. Make sure that this value is appropriate (i.e. a positive number), and then pass the value to your newly-written function. 

**Formulas**:<pre><code>Area of a square: side_length²
Area of a circle: π * radius²
Use 3.14 as the value of pi
</code></pre>

Example output (**bold** is user input):
<pre><code>Enter side length: <b>10</b>
The radius of the circle is: 3.21
The probability of landing in the circle is: 0.323548
</code></pre>

**1a**. Write an algorithm in pseudocode for the program above.

-----------------------------
<br/><br/>

-----------------------------

**1b**. Imagine what a sample run of your program would look like.

*Sample run:*

-----------------------------
<br/><br/>

-----------------------------
**1c**. Identify the values that you must test for. We call these values “boundary conditions”.

-----------------------------
<br/><br/>

-----------------------------
**1d**.  Implement your solution in C++ using VS  Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make you sure you test for the values used in your sample runs, and for the boundary conditions.

## 2. Recursion <a name="recursion"></a>

This section aims to test your understanding of recursion. Write a function that reverses strings. That is, for the input “Teach”, the output will be “hcaeT”. You should only solve this problem using recursion. Your solution should not use loops or anything similar.

**2a.** Identify the **base case(s)** for this recursive problem, that is, the smallest possible version(s) of this problem.

-----------------------------
<br/><br/>

----------------------------- 

**2b**. Write an algorithm in pseudocode for the program above.

-----------------------------
<br/><br/>

-----------------------------

**2c**. Imagine what a sample run of your program would look like.

*Sample run:*

-----------------------------
<br/><br/>

-----------------------------

**2d**. Identify the values that you must test for. We call these values “boundary conditions”.

-----------------------------
<br/><br/>

-----------------------------

**2e**.  Implement your solution in C++ using VS  Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make you sure you test for the values used in your sample runs, and for the boundary conditions.

# Deliverables <a name="deliverables"></a>
Complete the Recitation 12 assignment on [Canvas](https://canvas.colorado.edu/courses/85979/quizzes/288476?module_item_id=4130669)
