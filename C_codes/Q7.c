#include<stdio.h>

// Function to calculate and print the sum of a and b
void add(){
    int a = 5, b = 8;
    int c = a + b; // Calculating the sum of a and b

    printf("The sum of a+b = %d", c); // Printing the sum  
}

int main(){
    add();  // Calling the add function to perform the addition and print the result

    return 0;
}
