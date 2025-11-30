// Q50 (Nested Loops without Arrays/Strings)
// Write a program to print the following pattern:
// *****
//  ****
//   ***
//    **
//     *
// Sample Output:
// *****
//  ****
//   ***
//    **
//     *

#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        // print leading spaces
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        // print stars
        for (int j = 0; j < rows - i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
