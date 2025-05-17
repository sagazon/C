#include <stdio.h>

// Function to calculate average from total marks
float averagemark(int x)
{
    return x / 3.0;  // Divide total by 3.0 to get float result
}

// Function to calculate total marks from three subjects
int totalmarks(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    char name[50];  // Variable to store student name
    int subject1, subject2, subject3;  // Variables to store marks

    // Take user input for name and subject marks
    printf("Enter your name: ");
    scanf("%s", name);  // Reads one-word string

    printf("Enter the mark of Subject1 (out of 100): ");
    scanf("%d", &subject1);

    printf("Enter the mark of Subject2 (out of 100): ");
    scanf("%d", &subject2);

    printf("Enter the mark of Subject3 (out of 100): ");
    scanf("%d", &subject3);

    // Calculate total and average
    int total = totalmarks(subject1, subject2, subject3);
    float average = averagemark(total);

    // Display output
    printf("CALCULATING...\n");
    printf("Hello %s, your total is %d, and your average is %.2f\n", name, total, average);

    return 0;
}
