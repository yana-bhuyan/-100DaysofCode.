// Q41 (Loops without Arrays/Strings)
// Write a program to swap the first and last digit of a number.
// Sample:
// Input: 1234
// Output: 4231

#include <stdio.h>
#include <math.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int n = num > 0 ? num : -num; // handle negative numbers
    int digits = (n == 0) ? 1 : (int)log10(n) + 1;

    int first = n / pow(10, digits - 1);
    int last = n % 10;

    if (digits == 1) {
        printf("%d", n);
        return 0;
    }

    int middle = n % (int)pow(10, digits - 1) / 10;
    int swapped = last * pow(10, digits - 1) + middle * 10 + first;

    printf("%d", swapped);

    return 0;
}
