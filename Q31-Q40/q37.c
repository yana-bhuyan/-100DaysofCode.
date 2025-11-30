// Q37 (Loops without Arrays/Strings)
// Write a program to find the LCM of two numbers.
// Sample:
// Input: 4 5
// Output: 20

#include <stdio.h>

int main() {
    int a, b;
    long long lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int max = (a > b) ? a : b;
    lcm = max;

    while (1) {
        if (lcm % a == 0 && lcm % b == 0) {
            break;
        }
        lcm++;
    }

    printf("%lld", lcm);

    return 0;
}
