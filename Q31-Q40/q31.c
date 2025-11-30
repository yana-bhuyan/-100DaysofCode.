// Q31 (Loops without Arrays/Strings)
// Write a program to take a number as input and print its equivalent binary representation.
// Sample:
// Input: 10
// Output: 1010

#include <stdio.h>

int main() {
    int num;
    int binary[32]; // enough for 32-bit integer
    int i = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("0");
        return 0;
    }

    int n = num; // preserve original number
    while (n > 0) {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }

    // print in reverse
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    return 0;
}
