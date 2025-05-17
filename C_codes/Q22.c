#include <stdio.h>

// Function that adds 1 to the input value
int fun(int x)
{
    return x + 1;
}

int main()
{
    int a;

    // Get user input
    printf("Enter the value a: ");
    scanf("%d", &a);

    // Call the function and print the result
    printf("%d", fun(a));

    return 0;
}
