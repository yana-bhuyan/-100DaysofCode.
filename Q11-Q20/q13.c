// Q13 (Conditional Statements)
// Write a program to input a year and check whether it is a leap year or not using conditional statements.
// Sample:
// Input: 2020
// Output: Leap year
// Note: Year is a leap year if divisible by 4 but not 100, except if divisible by 400.

#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Leap year");
    } else {
        printf("Not a leap year");
    }

    return 0;
}
