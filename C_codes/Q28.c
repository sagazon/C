#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("CALCULATOR READY...\n");

    // Input first number
    printf("Enter first number: ");
    scanf("%d", &a);

    // Input operator (+, -, *, /)
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);  // Space before %c to consume newline

    // Input second number
    printf("Enter second number: ");
    scanf("%d", &b);

    // Perform operation based on operator
    switch (op) {
        case '+':
            printf("Result: %d\n", a + b);
            break;
        case '-':
            printf("Result: %d\n", a - b);
            break;
        case '*':
            printf("Result: %d\n", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("Result: %.2f\n", (float)a / b);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator entered.\n");
    }

    return 0;
}
