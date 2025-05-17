#include <stdio.h>

// Function to find and print the greatest of three numbers
int fun(int a, int b, int c) {
    if (a > b) {
        if (a > c)
            printf("%d is greater\n", a);
        else
            printf("%d is greater\n", c);
    } else {
        if (b > c)
            printf("%d is greater\n", b);
        else
            printf("%d is greater\n", c);
    }
}

int main() {
    int a, b, c;

    // Taking input for three numbers
    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    printf("c = ");
    scanf("%d", &c);

    // Calling the function to find the greatest
    fun(a, b, c);

    return 0;
}
