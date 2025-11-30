// Q30 (Loops without Arrays/Strings)
// Write a program to reverse a given number.
// Sample:
// Input: 1234
// Output: 4321

#include <stdio.h>

int main() {
    int num, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    printf("%d", reversed);

    return 0;
}
