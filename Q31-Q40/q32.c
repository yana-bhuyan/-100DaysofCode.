// Q32 (Loops without Arrays/Strings)
// Write a program to check if a number is a palindrome.
// Sample:
// Input: 121
// Output: Palindrome

#include <stdio.h>

int main() {
    int num, original, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    if (reversed == original) {
        printf("Palindrome");
    } else {
        printf("Not palindrome");
    }

    return 0;
}
