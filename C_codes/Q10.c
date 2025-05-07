#include <stdio.h>

// Function to calculate and print the result of (a + b) * 2
void calc() {
    int a = 5, b = 8;
    float c = (a + b) * 2;
    printf("The value of c = %f", c);  // Output: The value of c = 26.000000, Use %.2f to limit float value
}

int main() {
    calc();  // Calling the calc function
    return 0;
}
