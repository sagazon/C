#include<stdio.h>

// Function to calculate total marks of three subjects
int total_marks(int a, int b, int c)
{
    return a + b + c;
}

// Function to calculate the average marks
float average_mark(int x)
{
    return x / 3.0;  // Calculate average by dividing total by 3.0
} 

int main()
{
    char name[50];  // Declare a character array to store the name
    int subject1, subject2, subject3;

    // Take user input for name and marks of three subjects
    printf("Enter your name: ");
    scanf("%s", name);  // Use %s for reading a string (no need for &)
    printf("Enter the mark of Subject1 (out of 100): ");
    scanf("%d", &subject1);
    printf("Enter the mark of Subject2 (out of 100): ");
    scanf("%d", &subject2);
    printf("Enter the mark of Subject3 (out of 100): ");
    scanf("%d", &subject3);

    printf("CALCULATING...\n");

    // Calculate total marks and average
    int total = total_marks(subject1, subject2, subject3);
    float ave = average_mark(total);

    // Display the result
    printf("Hello %s, your total marks are: %d, and your average is: %.2f\n", name, total, ave);

    return 0;
}
