#include <stdio.h>

int main() {
    //initializations
    int birthMonth, birthDay, birthYear;
    int currentMonth, currentDay, currentYear;
    int currentAge, maxHeartRate;
    double targetHeartRateLow, targetHeartRateHigh;

    // Get the birth date
    printf("Enter your birth date MM DD YYYY: ");
    scanf("%d %d %d", &birthMonth, &birthDay, &birthYear);

    // Get current date
    printf("Enter the current date MM DD YYYY: ");
    scanf("%d %d %d", &currentMonth, &currentDay, &currentYear);

    // Calculate age
    currentAge = currentYear - birthYear;
    if (currentMonth < birthMonth || (currentMonth == birthMonth && currentDay < birthDay)) {
        currentAge--; // birthday hasn't occurred yet this year
    }

    // Calculate the maximum heart rate
    maxHeartRate = 220 - currentAge;

    // Calculate target heart rate range
    targetHeartRateLow = maxHeartRate * 0.50;
    targetHeartRateHigh = maxHeartRate * 0.85;

    // Display results
    printf("\nYour current age is: %d years old\n", currentAge);
    printf("Your reccomended maximum heart rate is: %d bpm\n", maxHeartRate);
    printf("Your target heart rate range is : %.1f to %.1f bpm\n", targetHeartRateLow, targetHeartRateHigh);

    scanf("%d",birthMonth); //Stalls for the .exe
    return 0;
}
