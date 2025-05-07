#include <stdio.h>

// Function to calculate and print the product of a and b
void multiple() {
    int a = 5, b = 8;
    float c = a * b;  // Calculating the product of a and b
    printf("The multiple of a*b = %f", c);  // Printing the result
}

int main() {
    multiple();  // Calling the multiple function
    return 0;    // Return statement for successful execution
}
