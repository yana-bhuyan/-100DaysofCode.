// Q9 (User Inputs, Operations & Output)
// Write a program to calculate simple and compound interest for given
// principal, rate, and time.

#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t;

    printf("Enter Principal, Rate, and Time: ");
    scanf("%f %f %f", &p, &r, &t);

    float simpleInterest = (p * r * t) / 100;

    float compoundInterest = p * (pow((1 + r / 100), t) - 1);

    printf("Simple Interest=%.2f, Compound Interest=%.2f",
           simpleInterest, compoundInterest);

    return 0;
}








