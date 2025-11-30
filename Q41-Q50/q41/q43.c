// Q43 (Loops without Arrays/Strings)
// Write a program to check if a number is a strong number.
// Sample:
// Input: 145
// Output: Strong number

#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int n = num > 0 ? num : -num; // handle negative numbers
    int temp = n;

    while(temp != 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if(sum == n)
        printf("Strong number");
    else
        printf("Not strong number");

    return 0;
}
