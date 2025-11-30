// Q42 (Loops without Arrays/Strings)
// Write a program to check if a number is a perfect number.
// Sample:
// Input: 6
// Output: Perfect number

#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num && num != 0) {
        printf("Perfect number");
    } else {
        printf("Not perfect number");
    }

    return 0;
}
