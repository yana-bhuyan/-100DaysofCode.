// Q29 (Loops without Arrays/Strings)
// Write a program to calculate the factorial of a number.
// Sample:
// Input: 5
// Output: 120

#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0) {
        printf("Factorial not defined for negative numbers");
    } else {
        for(int i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("%llu", factorial);
    }

    return 0;
}
