// Q34 (Loops without Arrays/Strings)
// Write a program to check if a number is prime.
// Sample:
// Input: 7
// Output: Prime

#include <stdio.h>

int main() {
    int num, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i*i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("Prime");
    else
        printf("Not prime");

    return 0;
}
