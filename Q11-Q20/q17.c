// Q17 (Conditional Statements)
// Write a program to find the roots of a quadratic equation and categorize them.
// Sample:
// Input: 1 -3 2
// Output: Roots are real and different: 2, 1

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    float discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        float root1 = (-b + sqrt(discriminant)) / (2*a);
        float root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and different: %.2f, %.2f", root1, root2);
    } else if (discriminant == 0) {
        float root = -b / (2*a);
        printf("Roots are real and same: %.2f", root);
    } else {
        printf("Roots are complex");
    }

    return 0;
}
