#include<stdio.h>

// Function to calculate area of a circle
float circleArea()
{
    float r = 5;          // Radius of the circle
    float pi = 3.14;      // Value of pi
    float area = pi * r * r;  // Formula: π × r²
    return area;          // Return the calculated area
}

int main()
{
    float result = circleArea();  // Call the function and store result
    printf("Area of the circle is: %f", result);  // Print the area
    return 0;
}
