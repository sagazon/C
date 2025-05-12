#include<stdio.h>

// Function to convert minutes to hours and remaining minutes
void mins_To_hours_and_minutes(int m)
{
    int hours = m / 60;      // Calculate hours
    int minutes = m % 60;    // Calculate remaining minutes
    printf("Converted %d minutes to: %d hours and %d minutes\n", m, hours, minutes);
}

int main()
{
    int totalMin;

    // Take input in minutes from user
    printf("Enter the total minutes: ");
    scanf("%d", &totalMin);

    printf("CONVERTING...\n");

    // Call function to display hours and minutes
    mins_To_hours_and_minutes(totalMin);

    return 0;
}
