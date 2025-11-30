// Q39 (Loops without Arrays/Strings)
// Write a program to find the product of odd digits of a number.
// Sample:
// Input: 12345
// Output: 15 (1*3*5)

#include <stdio.h>

int main() {
    int num;
    long long product = 1;
    int hasOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int n = num > 0 ? num : -num; // handle negative numbers

    while (n != 0) {
        int digit = n % 10;
        if (digit % 2 != 0) {
            product *= digit;
            hasOdd = 1;
        }
        n /= 10;
    }

    if (!hasOdd)
        product = 1;

    printf("%lld", product);

    return 0;
}
