# EE2073 - Introduction to Computer Programming for Engineers
### FA2026

![Gol D. Roger go find my treasure](https://media.tenor.com/JdWbOYAqHHsAAAAM/one-piece-gold-roger.gif)


Introduction to Computer Programming for Engineers is an introductory C course which focuses on applications in Electrical and Computer Engineering. It is taught by Mr. Bob Applione at UT San Antonio.

## HW Template

The Homework Template was created by Mr. Applione for students to use as a standardized file header. It contains a block comment for the student to put their name and ID.

## HW1

Homework 1 goes over the basics of writing a C program including creating a function, writing the `main()` function, using a `printf()` statement, and passing an argument to a user-defined function.

- Inputs: none
- Outputs: The string, "Howdy, Mr. Applione!" along with a newline character.

## HW2

Homework 2 goes over the fundamentals of writing functions to calculate values, using arithmetic operators, assigning values to variables, and writing longer `printf()` statements.
Specifically, Homework 2 covers calculating the following values for a 555 timer given the resistance values for the Resistors A and B, and the capacitance value for the Capacitor C of the 555:
- Frequency: $f = 1/T = \frac{1.44}{C(R_a + 2R_b)}$
- Duty Cycle: $D = \frac{R_b}{R_a + 2R_b}$

<br>

- Inputs: none
- Outputs: The testing input values for $R_a$, $R_b$, $C$ and the corresponding output frequencies and duty cycles of the 555 timer as strings in the console

## HW3

Homework 3 goes over using while loops and mathematical algorithms to approximate the value of the square root of a floating point number using Heron's Method.
Heron's Method is defined as such:
1) function SquareRoot(x):
2)   Choose some small, positive, real value $\epsilon$ to represent the calculation error
3)   Choose some initial value, $y$
4)   Repeat while $|y^2 - x|<\epsilon$: \
   $y=\frac{1}{2}\left(\frac{x}{y}+y\right)$
6)   Return y

<br>

- Inputs: none
- Outputs: Four strings with the given values 32, 130, 195, 49, along with their roots calculated with the function out to three decimal places.

## Lab 1

Lab 1 goes back over the basics from Homework 1. Specifically, Lab 1 involves creating a function to calculate the area of a triangle and passing inputs into the function in various ways such as directly or as variables.
