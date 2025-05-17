#include <stdio.h>

// Create a marks report system where user enters 4 subject marks and gets total and average. Use struct and if-else.

struct foursub
{
    int maths;
    int science;
    int computer_science; 
    int english;
};

int totalMark(int a, int b, int c, int d){
    return a + b + c + d;
}

int averageMark(int a, int b, int c, int d){
    int result = totalMark(a, b, c, d);
    return result / 4;
}

int main(){
    struct foursub s;

    printf("Enter the maths mark: ");
    scanf("%d", &s.maths);
    printf("Enter the science mark: ");
    scanf("%d", &s.science);
    printf("Enter the computer science mark: ");
    scanf("%d", &s.computer_science);
    printf("Enter the english mark: ");  // Input for new subject
    scanf("%d", &s.english);

    printf("The total of 4 subject marks is %d\n", totalMark(s.maths, s.science, s.computer_science, s.english));
    printf("And the average of 4 subject marks is %d\n", averageMark(s.maths, s.science, s.computer_science, s.english));

    // Maths report
    if (s.maths >= 35){
        if (s.maths >= 50){
            if (s.maths >= 99){
                printf("A grade in Maths\n");
            }
            else{
                printf("B grade in Maths\n");
            }
        }
        else{
            printf("C grade in Maths\n");
        }
    }
    else{
        printf("Fail in Maths, Need to improve more\n");
    }

    // Science report
    if (s.science >= 35){
        if (s.science >= 50){
            if (s.science >= 99){
                printf("A grade in Science\n");
            }
            else{
                printf("B grade in Science\n");
            }
        }
        else{
            printf("C grade in Science\n");
        }
    }
    else{
        printf("Fail in Science, Need to improve more\n");
    }

    // Computer Science report
    if (s.computer_science >= 35){
        if (s.computer_science >= 50){
            if (s.computer_science >= 99){
                printf("A grade in Computer Science\n");
            }
            else{
                printf("B grade in Computer Science\n");
            }
        }
        else{
            printf("C grade in Computer Science\n");
        }
    }
    else{
        printf("Fail in Computer Science, Need to improve more\n");
    }

    // English report
    if (s.english >= 35){
        if (s.english >= 50){
            if (s.english >= 99){
                printf("A grade in English\n");
            }
            else{
                printf("B grade in English\n");
            }
        }
        else{
            printf("C grade in English\n");
        }
    }
    else{
        printf("Fail in English, Need to improve more\n");
    }
}
