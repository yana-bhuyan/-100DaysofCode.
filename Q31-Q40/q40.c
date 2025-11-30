// Q40 (Loops without Arrays/Strings)
// Write a program to find the 1's complement of a binary number and print it.
// Sample:
// Input: 1010
// Output: 0101

#include <stdio.h>

int main() {
    long long binary;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    long long n = binary;
    long long rev = 0;
    long long place = 1;

    // Process digits from right to left
    while (n != 0) {
        int digit = n % 10;
        if (digit != 0 && digit != 1) {
            printf("Invalid binary number");
            return 0;
        }
        int complement = (digit == 0) ? 1 : 0;
        rev += complement * place;
        place *= 10;
        n /= 10;
    }

    printf("%0*lld", (int)log10(binary)+1, rev); // preserve leading zeros
    return 0;
}
