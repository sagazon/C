#include<stdio.h>

// Function to perform modulus operation
void modulus()
{
    int a = 5, b = 8;

    // Modulus operation between a and b
    int c = a % b;

    // Print the result
    printf("The value of c = %d", c);
}

int main()
{
    // Call the modulus function
    modulus();

    return 0;
}
