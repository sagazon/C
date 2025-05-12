#include<stdio.h>

// Function to calculate the area of a rectangle
int calAreaOfRectangle(int a, int b)
{
    int area = a * b;
    return area;
}

int main()
{
    int length, breadth;

    // Get length and breadth from the user
    printf("Enter the length value: ");
    scanf("%d", &length);
    printf("Enter the breadth value: ");
    scanf("%d", &breadth);

    printf("CALCULATING...\n");

    // Print the area of the rectangle
    printf("The area of the rectangle is: %d", calAreaOfRectangle(length, breadth));

    return 0;
}
