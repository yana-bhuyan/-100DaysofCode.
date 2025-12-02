//Q58: Find the maximum and minimum element in an array.

#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int max, min;

    scanf("%d", &n);  

    
    scanf("%d", &arr[0]);
    max = min = arr[0];

    
    for (i = 1; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }

    printf("Max=%d, Min=%d", max, min);

    return 0;
}
