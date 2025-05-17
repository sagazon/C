#include <stdio.h>

// Function to check whether the number is positive, negative, or zero
int fun(int x)
{
    if (x > 0)
        printf("%d is a +ve number", x);
    else if (x < 0)
        printf("%d is a -ve number", x);
    else
        printf("%d is zero", x);
}

int main()
{
    int a;

    // Taking input from the user
    printf("Enter the value: ");
    scanf("%d", &a);

    // Calling the function to check the number type
    fun(a);

    return 0;
}
