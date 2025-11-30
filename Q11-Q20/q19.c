// Q19 (Conditional Statements)
// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
// Sample:
// Input: 3 3 3
// Output: Equilateral

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) {
        printf("Equilateral");
    } else if (a == b || b == c || a == c) {
        printf("Isosceles");
    } else {
        printf("Scalene");
    }

    return 0;
}
