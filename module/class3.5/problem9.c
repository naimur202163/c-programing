
// Write a C program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days.
// Test Data :

// Input no. of days: 2535

// Expected Output:

// 6 Year(s)

// 11 Month(s)

// 15 Day(s)

#include <stdio.h>

int main()
{
    float days = 2535;
    float year = days / 365;
    printf("Year: %lf\n", year);
}