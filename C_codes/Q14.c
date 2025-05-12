#include<stdio.h>

// Function to return square of a number
int square(int x)
{
    return x * x;
}

// Function to return sum of squares of two numbers
int sumofSquare(int a, int b)
{
    return square(a) + square(b);  // Call square function for both a and b
}

int main()
{
    int a = 2, b = 3;

    // Call the sumofSquare function and store result
    int result = sumofSquare(a, b);

    // Print the result
    printf("Sum of square of %d and %d is: %d", a, b, result);

    return 0;
}
