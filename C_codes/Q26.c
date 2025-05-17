#include <stdio.h>

// Define a structure to store marks of three subjects
struct subjects_mark {
    float science;
    float maths;
    float computer_science;
};

// Function to calculate the average of three marks
float sumoff(float a, float b, float c) {
    return (a + b + c) / 3;
}

int main() {
    struct subjects_mark s;

    // Input marks for each subject
    printf("Enter the Science mark: ");
    scanf("%f", &s.science);

    printf("Enter the Maths mark: ");
    scanf("%f", &s.maths);

    printf("Enter the Computer Science mark: ");
    scanf("%f", &s.computer_science);

    // Calculate and print average
    printf("\nThe average of three subjects is: %.2f\n\n",
           sumoff(s.science, s.maths, s.computer_science));

    // Function to print grade for each subject
    // Science Grade
    printf("Science: ");
    if (s.science > 35) {
        if (s.science > 50) {
            if (s.science > 95)
                printf("A grade\n");
            else
                printf("B grade\n");
        } else {
            printf("C grade\n");
        }
    } else {
        printf("Fail\n");
    }

    // Maths Grade
    printf("Maths: ");
    if (s.maths > 35) {
        if (s.maths > 50) {
            if (s.maths > 95)
                printf("A grade\n");
            else
                printf("B grade\n");
        } else {
            printf("C grade\n");
        }
    } else {
        printf("Fail\n");
    }

    // Computer Science Grade
    printf("Computer Science: ");
    if (s.computer_science > 35) {
        if (s.computer_science > 50) {
            if (s.computer_science > 95)
                printf("A grade\n");
            else
                printf("B grade\n");
        } else {
            printf("C grade\n");
        }
    } else {
        printf("Fail\n");
    }

    return 0;
}
