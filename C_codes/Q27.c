#include <stdio.h>

// Function to perform addition
float add(int a, int b){
    return a + b;
}

// Function to perform subtraction
float sub(int a, int b){
    return a - b;
}

// Function to perform multiplication
float mult(int a, int b){
    return a * b;
}

// Function to perform division with error check
float divide(int a, int b){
    if (b != 0){
        return (float)a / b;
    } else {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
}

int main(){
    int a, b;
    char op;

    printf("----- BASIC CALCULATOR -----\n");

    // Input
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);  // space before %c handles newline

    printf("Enter second number: ");
    scanf("%d", &b);

    // Operation and Output
    printf("RESULT: ");
    if (op == '+')
        printf("%.2f\n", add(a, b));
    else if (op == '-')
        printf("%.2f\n", sub(a, b));
    else if (op == '*')
        printf("%.2f\n", mult(a, b));
    else if (op == '/')
        printf("%.2f\n", divide(a, b));
    else
        printf("Invalid operator! Please try again.\n");

    return 0;
}
