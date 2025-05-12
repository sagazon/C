#include<stdio.h>

// Function to add three numbers
int addThree(int x, int y, int z)
{
    return x + y + z;
}

// Function to calculate average of three numbers
int average(int a, int b, int c)
{
    int sum = addThree(a, b, c);  // Call addThree to get sum
    return sum / 3;               // Return integer division result
}

int main()
{
    int a = 2, b = 3, c = 4;

    float result = average(a, b, c);  // Call average function

    // Print the average
    printf("The average of %d, %d, %d is: %d", a, b, c, result);

    return 0;
}
