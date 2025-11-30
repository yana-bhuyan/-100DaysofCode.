// Q28 (Loops without Arrays/Strings)
// Write a program to print the product of even numbers from 1 to n.
// Sample:
// Input: 4
// Output: 8 (2 * 4)

#include <stdio.h>

int main() {
    int n;
    long long product = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    int hasEven = 0;
    for (int i = 2; i <= n; i += 2) {
        product *= i;
        hasEven = 1;
    }

    if (hasEven)
        printf("%lld", product);
    else
        printf("No even numbers");

    return 0;
}
