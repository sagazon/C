#include <stdio.h>

// Define a structure to hold name and age
struct user_info
{
    char name[20]; // to store the name
    int age;       // to store the age
};

int main() {
    struct user_info p; // Create a structure variable

    // Input name and age from the user
    printf("Enter your name: ");
    scanf("%s", p.name); // For single-word names
    printf("Enter your age: ");
    scanf("%d", &p.age);

    // Output the entered information
    printf("Your name is %s and your age is %d\n", p.name, p.age);
    
    return 0;
}
