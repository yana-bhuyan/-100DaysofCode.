// Q26 (Loops without Arrays/Strings)
// Write a program to print numbers from 1 to n.
// Sample:
// Input: 5
// Output: 1 2 3 4 5

#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}
