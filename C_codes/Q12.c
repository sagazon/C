#include<stdio.h>

// Function to calculate the cube of a number
void cube()
{
    int a = 5;

    // Multiply a three times to get the cube
    int c = a * a * a;

    // Print the result
    printf("The value of c = %d", c);
}

int main()
{
    // Call the cube function
    cube();

    return 0;
}
