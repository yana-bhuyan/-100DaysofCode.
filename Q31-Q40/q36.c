// Q36 (Loops without Arrays/Strings)
// Write a program to find the HCF (GCD) of two numbers.
// Sample:
// Input: 12 18
// Output: 6

#include <stdio.h>

int main() {
    int a, b, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int min = (a < b) ? a : b;

    for (int i = min; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
            break;
        }
    }

    printf("%d", hcf);

    return 0;
}
