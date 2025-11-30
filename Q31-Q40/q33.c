// Q33 (Loops without Arrays/Strings)
// Write a program to check if a number is an Armstrong number.


#include <stdio.h>
#include <math.h>

int main() {
    int num, original, sum = 0, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    int temp = num;

    // count digits
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == original) {
        printf("Armstrong");
    } else {
        printf("Not Armstrong");
    }

    return 0;
}
