#include<stdio.h>

// Function to calculate average of three float numbers
float average(float x, float y, float z)
{
    return (x + y + z) / 3;
}

int main()
{
    float a, b, c;  // Declare float variables

    // Take input from user
    printf("Enter number a: ");
    scanf("%f", &a);
    printf("Enter number b: ");
    scanf("%f", &b);
    printf("Enter number c: ");
    scanf("%f", &c);

    printf("CALCULATING...\n");  // For Fun :)

    // Print the average with 2 decimal places
    printf("The Average of %f, %f, %f is: %.2f\n", a, b, c, average(a, b, c));

    return 0;
}
