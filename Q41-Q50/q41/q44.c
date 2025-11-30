// Q44 (Loops without Arrays/Strings)
// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
// Sample:
// Input: 3
// Output: Approximate sum: 3.3

#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    int numerator = 1;
    int denominator = 1;

    for (int i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;
        numerator += 2;
        denominator += 2;
    }

    printf("Approximate sum: %.2lf", sum);

    return 0;
}
