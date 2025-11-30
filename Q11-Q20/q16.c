// Q16 (Conditional Statements)
// Write a program to input three numbers and find the largest among them using if–else.
// Sample:
// Input: 3 7 5
// Output: Largest is 7

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int largest;

    if (a >= b && a >= c) {
        largest = a;
    } else if (b >= a && b >= c) {
        largest = b;
    } else {
        largest = c;
    }

    printf("Largest is %d", largest);

    return 0;
}
