// Q38 (Loops without Arrays/Strings)
// Write a program to find the sum of digits of a number.
// Sample:
// Input: 123
// Output: 6

#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int n = num > 0 ? num : -num; // handle negative numbers

    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }

    printf("%d", sum);

    return 0;
}
