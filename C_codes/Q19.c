#include <stdio.h>

// Function to add and subtract two numbers, then multiply the results
float add_And_sub(float x, float y) 
{
    float c = x + y;  // Calculate the sum
    float d = x - y;  // Calculate the difference
    float e = c * d;  // Multiply sum and difference
    return e;  // Return the result
}

int main() {
    float a, b;

    // Take input for a and b from user
    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);

    printf("CALCULATING...\n");

    // Display the result of (a+b)*(a-b)
    printf("The value of (%f + %f) * (%f - %f) is: %f\n", a, b, a, b, add_And_sub(a, b));
    
    return 0;
}
