// Q27 (Loops without Arrays/Strings)
// Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= 2*n; i += 2) {
        sum += i;
    }

    printf("%d", sum);

    return 0;
}
