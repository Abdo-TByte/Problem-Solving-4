# Array Sum Program in C++

## Description

This program creates two arrays filled with random numbers, then sums each pair of corresponding elements and stores the result in a third array. Finally, it prints all three arrays to the screen.

## How It Works

1. The user is prompted to enter the length of the arrays (number of elements).
2. Two arrays (`arr` and `arr2`) are filled with random numbers between 0 and 99.
3. The program sums the elements of the two arrays into a third array (`Sum`).
4. All three arrays are printed to the console.

## Functions

- **RandomNum**: Generates a random number between 0 and 99.
- **setarrey**: Fills an array with random numbers.
- **PrintArray**: Prints the elements of an array.
- **SumTwoArraysOnThird**: Sums two arrays element-wise and stores the result in a third array.

## How to Run

1. Compile the code using a C++ compiler, for example:
   ```sh
   g++ -o arrays Solve.cpp

Enter Your Array's Length : 5

First Array : 23  45  67  12  89  

Second Array : 56  34  78  90  11  

Array of Sums : 79  79  145  102  100  

